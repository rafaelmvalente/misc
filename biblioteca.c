#include <stdio.h>
#include <string.h>

// Criação do struct Pessoa
struct Pessoa {
    
    char nome[50];
    char cpf[15];
};

// Criação do struct Livro
struct Livro {
    
    char titulo[100];
    char autor[50];
    int ano_publicacao;
    int id;
    int qtd_disponivel;
    struct Pessoa pessoas[100];
    int sz_p;
};

// Criação da struct Biblioteca
struct Biblioteca {
    
    struct Livro livros[100];
    int sz_l;
};

// Criação da função de Cadastrar livros
void Cadastrar(struct Biblioteca *b) {
    
    if(b->sz_l >= 100) {
        printf("Limite máximo de livros atingidos");
        return;
    }
    
    struct Livro novo; // Criação para armazenar dados temporários do novo Livro
    int id_existe = 0; // Criação dessa variável para comparar se o ID do livro já existe
    
    printf("Digite o ID do livro: ");
    scanf("%d", &novo.id);
    for(int i = 0; i < b->sz_l; i++) {
        if(b->livros[i].id == novo.id) {
            id_existe = 1; // Já que existe um livro com esse ID, ele vira 1 (significa que achou)
            break;
        }
    }
    if(id_existe) {
        printf("Já existe um livro com esse ID\n");
        return;
    }
    
    // Cadastrando autor, título, ano de publicação e quantidades disponíveis
    printf("Digite o nome do título do livro: ");
    scanf(" %[^\n]", novo.titulo);
    printf("Digite o autor do livro: ");
    scanf(" %[^\n]", novo.autor);
    printf("Digite o ano de publicação do livro (4 dígitos): ");
    scanf("%d", &novo.ano_publicacao);
    printf("Digite a quantidade de livros que deseja cadastrar (máximo 10): ");
    scanf("%d", &novo.qtd_disponivel);
    
    
    if(novo.qtd_disponivel > 10) { // Caso passe o número máximo de quantidade
        novo.qtd_disponivel = 10; // Ajusta automaticamente para 10
    }
    
    novo.sz_p = 0; // Já que o livro está cadastrado e ninguém o emprestou, começa em 0
    b->livros[b->sz_l] = novo; // O novo livro vai para o espaço vazio do vetor
    b->sz_l++; // Como adicionamos um livro, o contador aumenta 1
    
    printf("Livro cadastrado com sucesso :)\n");
}

// Criação da função para Consultar livros
void Consultar(struct Biblioteca *b) {
    // Criando um menu básico para o usuário escolher se:
    int opc;
    printf("1- Listar todos os livros\n"); // 1- Quer saber todos os livros disponíveis
    printf("2- Buscar livro por ID\n"); // 2- Quer buscar apenas um livro pelo ID
    printf("\nDigite sua opção: ");
    scanf("%d", &opc);
    
    if(opc == 1) {
        if(b->sz_l == 0) {
            printf("Nenhum livro cadastrado\n");
            return;
        }
        
        // Listando todos os livros cadastrados caso o usuário escolha a opção 1
        for(int i = 0; i < b->sz_l; i++) {
            printf("Título do livro: %s\n", b->livros[i].titulo);
            printf("Autor do livro: %s\n", b->livros[i].autor);
            printf("Ano de publicação: %d\n", b->livros[i].ano_publicacao);
            printf("ID do livro: %d\n", b->livros[i].id);
            printf("Quantidade disponível: %d\n", b->livros[i].qtd_disponivel);
        }
    }
    else if(opc == 2) {
        int id_procurado, encontrado = 0; // Condição de parada. Começa no 0 porque significa que não achou nada
        printf("Digite o ID do livro: ");
        scanf("%d", &id_procurado);
        
        for(int i = 0; i < b->sz_l; i++) {
            if(b->livros[i].id == id_procurado) { // Caso o id procurado seja igual ao id do livro
                // Print das informações do livro, incluindo id
                printf("Título do livro: %s\n", b->livros[i].titulo);
                printf("Autor do livro: %s\n", b->livros[i].autor);
                printf("Ano de publicação: %d\n", b->livros[i].ano_publicacao);
                printf("ID do livro: %d\n", b->livros[i].id);
                printf("Quantidade disponível: %d\n", b->livros[i].qtd_disponivel);
                encontrado = 1; // Mudou para 1 porque achou o livro
                break;
            }
        }
        if(!encontrado) { // Caso o livro não possua o id digitado
            printf("Livro não encontrado\n");
        }
        else {
            printf("Opção inválida\n"); // Como se fosse o "default" no switch-case
        }
    }
}

// Criação de uma função para Emprestar livros
void Emprestar(struct Biblioteca *b) {
    int id_buscar;
    printf("Digite o ID do livro para empréstimo: ");
    scanf("%d", &id_buscar);
    
    int idx = -1; // Começa com menos -1 porque significa que não foi encontrado
    for(int i = 0; i < b->sz_l; i++) {
        if(b->livros[i].id == id_buscar) { // Caso o id buscado estiver cadastrado
            idx = i; // Armazena na posição
            break;
        }
    }
    
    if(idx == -1) { // Caso o idx continue sendo -1
        printf("Livro não encontrado"); // Printa que o livro não foi encontrado
        return;
    }
    
    struct Livro *l = &b->livros[idx]; // Está apontando para o livro da posição idx
    if(l->qtd_disponivel == 0) {
        printf("Quantidade de livros indisponíveis\n"); 
        return;
    }
    
    // Criação de um "mini cadastro" para realizar o empréstimo
    struct Pessoa p;
    printf("Digite seu nome: ");
    scanf(" %[^\n]", p.nome);
    printf("Digite seu CPF: ");
    scanf("%s", p.cpf);
    
    for(int i = 0; i < l->sz_p; i++) {
        if(strcmp(l->pessoas[i].cpf, p.cpf) == 0) { // Caso a pessoa já tenha pego esse livro
            printf("Essa pessoa já pegou esse livro\n"); // Printa que ele já pegou
            return;
        }
    }
    
    l->pessoas[l->sz_p] = p; // Adiciona nas pessoas que já emprestaram livros
    l->sz_p++;  // Aumenta o tamanho de pessoas que já emprestaram livros
    l->qtd_disponivel--; // Diminui a quantidade de exemplares disponíveis
    printf("Empréstimo realizado com sucesso");
}

// Criação da função para Devolver livros

   
int main() {
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  Criação do struct Contato

typedef struct Contato {
    
    char nome[50];
    char celular[15];
    struct Contato* esquerda;
    struct Contato* direita;
} Contato;

// Criação da função para printar o menu
void menu() {
    
    printf("\nMenu\n");
    printf("1. Adicionar contato\n");
    printf("2. Buscar contato\n");
    printf("3. Remover contato\n");
    printf("4. Listar contatos\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
}


int main()
{
   
   
   Contato* raiz = NULL;
   int opcao;
   do {
       menu();
       scanf("%d", &opcao);
       
       switch(opcao) {
           
           case 1: {
               // Adicionar contato
               Contato* novo = (Contato*)malloc(sizeof(struct Contato));
               printf("Nome: ");
               scanf("%s", novo->nome);
               printf("Celular: ");
               scanf("%s", novo->celular);
               novo->esquerda = NULL;
               novo->direita = NULL;
               raiz = inserir(raiz, novo);
               break;
           }
           
           case 2: {
               // Buscar contato
               char nome[50];
               printf("Nome para buscar: ");
               scanf("%s", nome);
               Contato* encontrado = buscar(raiz, nome);
               if(encontrado) {
                   printf("Contato encontrado: %s, Celular: %s\n", encontrado->nome, encontrado->celular);
               } else {
                   printf("Contato não encontrado.\n");
               }
           }
           
           case 3: {
               // Remover contato
               char nome[50];
               printf("Nome para remover: ");
               scanf("%s", nome);
               raiz = remover(raiz, nome);
               break;
           }
           
           case 4: {
               // Imprimir contatos
               printf("Contatos:\n");
               ImprimirArvoreDeContatos(raiz);
               break;
           }
           
           case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente\n");
       }
   } while(opcao != 5);
   
    return 0;
}

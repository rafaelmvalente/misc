import unittest

inadimplentes = ["Joao Silva", "Maria Oliveira", "Carlos Souza"]

def verificar_emprestimo(nome, idade, renda, escolaridade):
    motivos = []

    if idade < 18:
        motivos.append("Idade inferior a 18 anos!")
    if renda < 2000:
        motivos.append("Renda mensal inferior a 2000 R$")
    if nome in inadimplentes:
        motivos.append("Nome consta na lista de inadimplentes")
    if escolaridade.lower() != "superior":
        motivos.append("Escolaridade não é de nível superior!")

    return motivos


if __name__ == "__main__":
    nome = input("Digite o nome da pessoa: ")
    idade = int(input("Digite a idade da pessoa: "))
    renda = float(input("Digite a renda mensal, em R$: "))
    escolaridade = input("Digite a escolaridade da pessoa: Fundamental, Médio ou Superior: ")

    motivos = verificar_emprestimo(nome, idade, renda, escolaridade)

    if len(motivos) == 0:
        print("Aprovado :)")
    else:
        print("Reprovado. Motivos: ")
        for motivo in motivos:
            print(f"{motivo}")

class TestEmprestimo(unittest.TestCase):
    def test_aprovado(self):
        motivos = verificar_emprestimo("Ana", 25, 3000, "superior")
        self.assertEqual(motivos, [])

    def test_reprovado_idade(self):
        motivos = verificar_emprestimo("Ana", 17, 3000, "superior")
        self.assertIn("Idade inferior a 18 anos!", motivos)

    def test_reprovado_renda(self):
        motivos = verificar_emprestimo("Ana", 25, 1000, "superior")
        self.assertIn("Renda mensal inferior a 2000 R$", motivos)

    def test_reprovado_inadimplente(self):
        motivos = verificar_emprestimo("Joao Silva", 25, 3000, "superior")
        self.assertIn("Nome consta na lista de inadimplentes", motivos)

    def test_reprovado_escolaridade(self):
        motivos = verificar_emprestimo("Ana", 25, 3000, "médio")
        self.assertIn("Escolaridade não é de nível superior!", motivos)

if __name__ == "__main__":
    unittest.main()

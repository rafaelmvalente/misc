voos = {}
passageiros = {}
voosDisponiveis = []
passageirosVoo = {}

print("SISTEMAS DE PASSAGENS AÉREAS:")
print("\n 1. Cadastrar voo")
print("\n 2. Consultar voo")
print("\n 3. Listar passageiros de um voo")
print("\n 4. Vender passagem")
print("\n 5. Cancelar passagem")
print("\n 6. Sair")

opcao = input("Escolha uma dessas opções: ")

if opcao == "1":
    numeroVoo = int(input("Digite o número do voo: "))
    vooExiste = 0
for chave in voos:
    if chave == numeroVoo:
        vooExiste = 1
    if vooExiste == 1:
        print("Voo já cadastrado!")
    else:
        origem = input("Cidade origem: ")
        destino  = input("Cidade destino: ")
        escalas = int(input("Número de escalas: "))
        preco = float(input("Preço da passagem: "))
        lugares = int(input("Quantidade de lugares disponíveis: "))
        voos[numeroVoo] = {"origem": origem, "destino": destino, "escalas": escalas, "preco": preco, "lugares": lugares}
        voosDisponiveis.append(numeroVoo)
        passageirosVoo[numeroVoo] = []
        print("Voo cadastrado com sucesso")
        

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
elif opcao == 2:
    print("\n Tipos de consulta:")
    print("1. Por código de voo")
    print("2. Por cidade origem")
    print("3. Por cidade destino")
    print("4. Por voo com menor escala")
    Consulta = input("Digite o tipo de consulta: ")
    if Consulta == "1":
        numeroVoo = int(input("Digite o número do voo: ")
        encontrou = 0
        chaveEncontrada = ""
        for chave in voos.keys():
            if chave == numero_voo and encontrou == 0:
                encontrou = 1
                chave_encontrada = chave
    
        
        

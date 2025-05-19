voos = {}
passageiros = {}
voosDisponiveis = []
passageirosVoo = {}

sistema = ""
while sistema != "0":
    print("SISTEMAS DE PASSAGENS AÉREAS:")
    print("\n 1. Cadastrar voo")
    print("\n 2. Consultar voo")
    print("\n 3. Listar passageiros de um voo")
    print("\n 4. Vender passagem")
    print("\n 5. Cancelar passagem")
    print("\n 6. Sair")

    opcao = input("Escolha uma dessas opções: ")

    if opcao == "1":
        numeroVoo = int(input("\nDigite o número do voo: "))
        origem = input("\nCidade origem: ")
        destino  = input("\nCidade destino: ")
        escalas = int(input("\nNúmero de escalas: "))
        preco = float(input("\nPreço da passagem, em reais: "))
        lugares = int(input("\nQuantidade de lugares disponíveis: "))
        voos[numeroVoo] = {"origem": origem, "destino": destino, "escalas": escalas, "preco": preco, "lugares": lugares}
        voosDisponiveis.append(numeroVoo)
        passageirosVoo[numeroVoo] = []
        print("\nVoo cadastrado com sucesso")

    if opcao == "2":
        print("\n TIPOS DE CONSULTA:")
        print("1. Código de Voo")
        print("2. Cidade origem")
        print("3. Cidade destino")
        print("4. Voo com menor escala")

        tipoConsulta = input("Escolha uma dessas opções: ")

        if tipoConsulta == "1":
            numeroVoo = int(input("\nDigite o número do voo: "))
            print(f"\nCidade origem: {voos[numeroVoo]['origem']}")
            print(f"\nCidade destino: {voos[numeroVoo]['destino']}")
            print(f"\nNúmero de escalas: {voos[numeroVoo]['escalas']}")
            print(f"\nPreço da passagem: {voos[numeroVoo]['preco']} R$")
            print(f"\nLugares disponíveis: {voos[numeroVoo]['lugares']}")
        else:
            print("\nVoo não encontrado")

        if tipoConsulta == "2":
            cidadeOrigem = input("Qual a cidade de origem? ")
            for numeroVoo in voos:
                if voos[numeroVoo]["origem"] == cidadeOrigem:
                    print(f"Número do voo: {numeroVoo}")
                    print(f"Cidade destino: {destino}")
                    print(f"Preço: {preco}")
                else:
                    print("Nenhum voo encontrado com essa origem.")




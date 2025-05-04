import random

jogar = 1

print("Bem-Vindo ao Jogo do Código Malucoooooo \n")

while jogar == 1:
    codigo = random.randint(1000, 9999)
    i1 = codigo // 1000
    i2 = (codigo // 100) % 10
    i3 = (codigo // 10) % 10
    i4 = codigo % 10

    tentativas = 10
    tentativa_atual = 1
    acertou = 0

    d1_acerto = "_"
    d2_acerto  = "_"
    d3_acerto = "_"
    d4_acerto = "_"

    print("Você tem 10 tentativas para acertar o número secreto entre [1000 e 9999].")
    print("A partir da 5ª tentativa o jogo irá te ajudar, dando dicas. \nBoa sorte!!!\n")

    while tentativas > 0 and acertou == 0:
        palpite = int(input(f"Tentativa {tentativa_atual}: Digite seu palpite (um número de 4 dígitos): "))

        if palpite < 1000 or palpite > 9999:
            print("Por favor, digite um número de 4 dígitos entre 1000 e 9999.")
        else:
            p1 = palpite // 1000
            p2 = (palpite // 100) % 10
            p3 = (palpite // 10) % 10
            p4 = palpite % 10

            acertos = 0
            erros = 0

            if p1 == i1:
                acertos += 1
                d1_acerto = i1
            else:
                erros += 1

            if p2 == i2:
                acertos += 1
                d2_acerto = i2
            else:
                erros += 1

            if p3 == i3:
                acertos += 1
                d3_acerto = i3
            else:
                erros += 1

            if p4 == i4:
                acertos += 1
                d4_acerto = i4
            else:
                erros += 1

            print(f"Progresso atual: {d1_acerto} {d2_acerto} {d3_acerto} {d4_acerto}")

            if tentativa_atual >= 5 and i1 != p1:
                print(f"Dica: O primeiro dígito é {'divisível por 5' if i1 % 5 == 0 else 'indivisível por 5'}")

            if tentativa_atual >= 7  and i4 != p4:
                print(f"Dica: O último dígito é {'par' if i4 % 2 == 0 else 'ímpar'}")

            if tentativa_atual >= 8 and i3 != p3:
                print(f"Dica: O terceiro dígito é {'maior que 5' if i3 > 5 else 'menor que 5'}")

            if tentativa_atual >= 9 and i2 != p2:
                print(f"Dica pra acertar em? O segundo dígito é {i2}")

            print(f"Você acertou {acertos} dígitos na posição correta.")
            print(f"Você errou {erros} dígitos.")
            print(f"Faltam {tentativas - 1} tentativas.\n")

            if acertos == 4:
                print(f"Parabéns! Você acertou o código {codigo} em {tentativa_atual} tentativas!")
                acertou = 1

            tentativas -= 1
            tentativa_atual += 1

    if acertou == 0:
        print(f"Você perdeu! O código secreto era {codigo}.")

    jogar_novamente = input("Deseja jogar novamente? 1= Sim / 2 = Não): ")
    if jogar_novamente == "1":
        jogar = 1
        print("\n----- NOVA PARTIDA -----\n")
    else:
        jogar = 0
        print("Obrigado por jogar! Até a próxima!")
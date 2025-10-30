C = int(input("Digite a quantidade de coelhos cobaias de 1 a 15: "))
R = int(input("Digite a quantidade de ratos cobaias de 1 a 15: "))
S = int(input("Digite a quantidade de sapos cobaias de 1 a 15: "))
while C > 15 or R > 15 or S > 15:
    print("Digite um número de cobaias possíveis!!!!") 
    C = int(input("Digite a quantidade de coelhos cobaias de 1 a 15: "))
    R = int(input("Digite a quantidade de ratos cobaias de 1 a 15: "))
    S = int(input("Digite a quantidade de sapos cobaias de 1 a 15: "))
T = C + R + S
percentualCoelhos = (C * 100) / T
percentualRatos = (R * 100) / T
percentualSapos = (S * 100) / T
print(f"O total de cobaias é: {T}")
print(f"O total de coelhos cobaias é: {C}")
print(f"O total de ratos cobaias é: {R}")
print(f"O total de sapos cobaias é: {S}")
print(f"O percentual de coelhos cobaias é: {percentualCoelhos:.2f}%")
print(f"O percentual de Ratos cobaias é: {percentualRatos:.2f}%")
print(f"O percentual de sapos cobaias é: {percentualSapos:.2f}%")

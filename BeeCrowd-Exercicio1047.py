hi = int(input("Digite a hora inicial:"))
mi = int(input("Digite o minuto inicial:"))
hf = int(input("Digite a hora final:"))
mf = int(input("Digite o minuto final:"))
while hi > 24 or hf > 24:
    print("O jogo tem no máximo 24 horas.")
    hi = int(input("Digite a hora inicial:"))
    hf = int(input("Digite a hora final:"))
    break
while mi < 1 or mf < 1:
    print("O jogo tem no minimo 1 minuto")
    mi = int(input("Digite o minuto inicial:"))
    mf = int(input("Digite o minuto final:"))
    break
horarioTotal = hf  - hi
minutoTotal = mf - mi
print(f"O JOGO DUROU {horarioTotal} HORA(S) E {minutoTotal} MINUTO(S) ")
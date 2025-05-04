x = int(input("Digite um numero inteiro:"))
n = -1
while n < 0:
    n = int(input("Digite um numero inteiro não negativo:"))
    if n < 0:
        print("Você não digitou um numero positivo. Vamos tentar novamente")

r = 1
for _ in range (n):
    r *= x
print(r)
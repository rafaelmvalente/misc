def calc1(peso, altura):
    IMC = peso / (altura * altura)
    return IMC
p = float(input("Peso, em KG: "))
a = float(input("Altura, em metros: "))
conta = calc1(p, a)
print(f"IMC = {conta}")
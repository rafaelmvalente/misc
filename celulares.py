

celulares = []
for i in range():
    preco = float(input("Preço do celular: "))
    celulares.append(preco)
media= sum(celulares) / len(celulares)
maiorPreco = max(celulares)
acima_3000 = 0
for preco in celulares:
    if preco > 3000:
        acima_3000 += 1
print(media)
print(maiorPreco)
print(acima_3000)

cartao = 4258502155300037
cartao = str(cartao)

r = 0

for i in range(len(cartao) - 1, -1, -1):
    digitos = int(cartao[i])
    resultado = digitos
    if i % 2 == 0:
        resultado = digitos * 2
        if resultado > 9:
            resultado = (resultado // 10) + (resultado % 10)
    print(resultado)
    r = r + resultado


if r % 10 == 0:
    print("NUMERO VÁLIDO!!!!")
else:
    print("NUMERO INVALIDO :(")
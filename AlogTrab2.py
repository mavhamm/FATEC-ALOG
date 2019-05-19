# Trabalho #2 de ALOG
# 19/05/2019

# .lower() faz o input ficar com letra minúscula
# float() converte input pra floating point
produto = input().lower()
tipo = input().lower()
qtdVendida = float(input())

if produto == 'a':
    preco = 34
elif produto == 'p':
    preco = 42.5
elif produto == 'b':
    preco = 28
elif produto == 's':
    preco = 27

# pass não faz nada
if tipo == 'f':
    pass
elif tipo == 'm':
    preco *= 1.15
elif tipo == 'g':
    preco *= 1.25

valorVenda = preco * qtdVendida

if valorVenda < 750:
    valorVenda += 45

print("%.2f    %.2f" % (preco, valorVenda))

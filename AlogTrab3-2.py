'''
Trabalho #3 de ALOG (part 2)
25/05/2019

Renan Casagrande
'''

massaIni = float(input("\nMassa inicial: "))
massaIni *= 1000 # transforma em gramas

totalSegundos = 0

# perde metade da massa até que ela seja inferior a 0.5g
while massaIni >= 0.5:
    massaIni /= 2
    totalSegundos += 50

print("Massa atual: %.2fg" % massaIni)

ss = totalSegundos % 60
mm = totalSegundos // 60

print("%.0f%.0f" % (mm, ss))

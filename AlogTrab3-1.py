'''
Trabalho #3 de ALOG (part 1)
25/05/2019

Renan Casagrande

1 - Quantidade de respostas Bom
2 - Porcentagem de mulheres com idade > 18 e < 25 cuja opinião é Regular
3 - A maior idade que respondeu Ótimo
4 - A menor idade que respondeu Regular

       opini = opinião
         bom = quantidade de respostas Bom
mulheres1825 = mulheres de 18 a 25 anos de idade
         reg = % de mulheres de 18 a 25 que responderam regular
'''


# inicializando variáveis
mulheres1825 = 0.0
reg = 0.0
bom = 0
idadesOtima = [] # lista vazia
idadesReg = []
maiorIdade = menorIdade = 0
lugares = 100

# ctrl + K + C  comment
# ctrl + K + U  uncomment (VS code shortcut)

for x in range(0, lugares):
    print(f"------------\ncadastro {x+1}")
    sexo = input("sexo: ").lower() 
    opini = input("opinião: ").lower()
    idade = int(input("idade: "))

    # para testes:
    # sexo = 'f'
    # opini = 'o'
    # idade = 22

    # quantidade de opinião BOM
    if opini == 'b':
        bom += 1

    # mulheres 18–25 de opinião REGULAR
    if idade > 18 and idade < 25 and sexo == 'f':
        mulheres1825 += 1
        if opini == 'r':
            reg += 1

    # maior idade com opinião ÓTIMA
    if opini == 'o':
        idadesOtima.append(idade)

    # menor idade com opinião REGULAR
    if opini == 'r':
        idadesReg.append(idade)

# calculando a % de mulheres 18–25 de opinião REGULAR
if mulheres1825 != 0:
    reg = reg / mulheres1825

if len(idadesOtima) != 0: # se a length da lista for diferente de 0 (i.e. não estiver vazia)
    maiorIdade = sorted(idadesOtima).pop(-1) # remove o último item da lista e joga para a variável maiorIdade
if len(idadesReg) != 0:
    menorIdade = sorted(idadesReg).pop(0) # remove o 1º item     "      "        "      "

print(f"\n1 - Qtde de opinião BOM: {bom}")
print(f"2 - % de mulheres de 18-25 regular: {reg*100}%") # needs output formatting
print(f"3 - Maior idade: {maiorIdade}\n4 - Menor idade: {menorIdade}")

'''
Trabalho #4 de ALOG | 31/05/2019
Conversão para binário

@ Renan

    Explicação: 

    Expoente começa em 7 e descresce a cada iteração.
    Ex.: como 7 >= 2³ não é verdade, o expoente diminui e só.
    Agora, 7 >= 2², então subtrai-se 2² de 7, e adiciona-se 10² à var binário
    10² = 100, que é 4 em binário
    Temos 3 >= 2¹. Subtrai-se 2¹ de 3, e adiciona-se 10¹ à var binário
    10¹ = 10, que é 2 em binário.
    etc

'''


msgErro = "Close but no cigar."
expoente = 8
binario = 0


num = int(input("número: "))

if num > 255:
    print(msgErro)

# input válido a partir daqui
else:
    # se o número for ímpar, adicionar 1 ao binário e subtrair 1 do número para torná-lo par
    if num % 2 != 0:
        binario += 1
        num -= 1
    
    while num > 1:
        expoente -= 1
        if num >= 2**expoente:
            num -= 2**expoente
            binario += 10**expoente
    
    print(f"binario: {binario}")

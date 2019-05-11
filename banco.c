// Trabalho #1 de ALOG 10/05/2019
// Saque com notas de 20 e 50 reais apenas

#include <stdio.h>

int main() {
    // declaração de variáveis
    char* txt = "nota(s) de";
    unsigned int saque, saque_aux, n20, n50;
    int flag = 1;

    // inicialização de variáveis
    n20 = n50 = 0;

    // processamento
    do {
        // entrada
        scanf("%d", &saque);

        if (saque > 1000) {
            printf("Valor acima do saque permitido de R$ 1.000,00\n");
            printf("Tente de novo: ");
        }

        else if (saque % 10 != 0 || saque == 10 || saque == 30) {
            printf(
                "Valor de saque não permitido para notas de 50 e de 20 "
                "reais\n");
            printf("Tente de novo: ");
        }

        // a partir daqui o saque é válido
        else {
            saque_aux = saque;
            if (saque % 50 == 0) {
                n50 = saque / 50;
            } else if ((saque_aux % 50) % 20 == 0) {
                n50 = saque_aux / 50;
                saque_aux %= 50;
                n20 = saque_aux / 20; // 1 ou 2
            } else if (saque_aux % 50 == 10) {
                n50 = (saque_aux - 60) / 50;
                n20 = 3;
            } else if (saque_aux % 50 == 30) {
                n50 = (saque_aux - 80) / 50;
                n20 = 4;
            }

            // números maiores que 80

            flag = 0;  // sai do loop
            printf("%d %s 50    %d %s 20\n", n50, txt, n20, txt);
        }

    } while (flag == 1);

    return 0;
}

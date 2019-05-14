/*	1� trabalho de ALOG | 17/05/2019

	Saque com notas de 50 e 20 reais sem usar estrutura de repeti��o (while)
	Algoritmo  de saques v�lidos: Fernando
	

*/ 


#include <stdio.h>
#include <locale.h> // para exibir acentua��o no cmd 1/2

int main () {
	setlocale(LC_ALL,""); // para exibir acentua��o no cmd 2/2
	
	int saqueAux, saque, n50, n20;
	int flag = 1;	
	char *txt1 = "notas";
	char *txt2 = "notas";
	
	// pedir o valor de saque at� que ele seja v�lido, ie, flag = 0
	do {
		scanf("%d", &saque);
		
		if(saque > 1000) {
			printf("Valor acima do saque permitido de R$ 1.000,00\n");
			printf("Tente de novo: ");
		}
		else if (saque % 10 != 0 || saque == 10 || saque == 30) {
			printf("Valor de saque n�o permitido para notas de 50 e de 20 reais\n");
			printf("Tente de novo: ");
		}
		
		// saques v�lidos:
		else {
			flag = 0; // sai do loop
			
			if (saque >= 50) {
				saqueAux = saque / 50;
				if ((saque - saqueAux * 50) % 20 != 0) {
					n50 = (saqueAux - 1);
				}
				else {
					n50 = saqueAux;
				}
			
				saque -= n50 * 50;
			}
			
			if (saque % 20 == 0) {
				n20 = saque / 20;
			}
			
			// nota(s)
			if (n50 == 1) {
				txt1 = "nota";
			}
			if (n20 == 1) {
				txt2 = "nota";
			}
			
			printf("%d %s de 50    %d %s de 20", n50, txt1, n20, txt2);
			
			
		}
	} while (flag == 1);
		
	
	
	return 0;
}


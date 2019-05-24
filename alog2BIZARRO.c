#include <stdio.h>

int main()
{
	char produto, tipo;
	float qtdeVend, preco = 0, valorVenda;
	valorVenda = 0;
		
//	printf("Digite o produto: (A/P/B/S)");
	scanf("%c", &produto);

	if (produto == 'a'|| produto == 'A') {
		preco = 34;
	} else if (produto == 'p'|| produto == 'P') {
		preco = 42.5;
	} else if (produto == 'b'|| produto == 'B') {
		preco = 28;
	} else if (produto == 's'|| produto == 'S') {
		preco = 27;
	} else {
		printf("bzzz");
		printf("%f", preco);
	}
	
	scanf("%c", &tipo);
////	printf("\nDigite o tipo: (F/M/G)");
	scanf("%c", &tipo);
//	
	if (tipo == 'f' || tipo == 'F') {
		preco = preco * 1;
	}	
	else if (tipo == 'm' || tipo == 'M'){
		preco = preco * 1.15;
	}
    	
	else if (tipo == 'g'|| tipo == 'G'){
		preco = preco * 1.25;
	}
	else {
		printf("bzzz");
	}
		
   		
   		
//
//	printf("Digite a Quantidade Vendida:");
	scanf("%f", &qtdeVend);

	valorVenda = preco * qtdeVend;

	if (valorVenda < 750)
    	valorVenda = valorVenda + 45;

	printf("\n %.2f", preco);
	printf("\n %.2f", valorVenda);
	
	return 0;
}

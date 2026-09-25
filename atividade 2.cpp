#include <iostream>
#include <stdio.h>

/* segunda atividade Prática no laboratório
Calculadora simples*/

main(){
	float A,B,R;
	char op;
	
	printf("Digite um numero:");
	scanf("%F",&A);
	
	printf("Digite um numero:");
	scanf("%F",&B);
	
	printf("Digite a para soma ");
	scanf("%c",&op);
	
	if(op == '+'){
	R=A+B;
		printf("Resultado: %f", R);
}
		if(op == '-'){
	R=A-B;
		printf("Resultado: %f", R);
}
		if(op == '/'){
	R=A/B;
		printf("Resultado: %f", R);
}
		if(op == '*'){
	R=A*B;
		printf("Resultado: %f", R);
}

}

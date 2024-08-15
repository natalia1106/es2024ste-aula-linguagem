#include <stdio.h>
void verifica_divisao_por_quatro(int num){
	if(num % 4 == 0){
		printf("%d dividivel por quatro.", num);
	}else{
		printf("%d dividivel nao e por quatro.", num);
	}

}
int main(){
	int valor;
	printf("Digite um numero com 3 digitos.\n");
	scanf("%d", &valor);
	if(valor > 99 && valor < 1000){
		verifica_divisao_por_quatro(valor);	
	}else{
		printf("O valor deve ter tres digios.\n");
	}
	
	return 0;
}

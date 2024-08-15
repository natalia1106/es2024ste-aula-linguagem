#include <stdio.h>
int divisivel(int num, int div){
//pode colocar dois tipos de variáveis no meio dos parenteses
	if(num % div == 0){
		return 1;
	}else{
		return 0;
	}
	}
int main(){
	int num, div;
	printf("Digite dois numeros.\n");
	scanf("%d%d", &num, &div);
	if(divisivel(num,div)){
		printf("Divisivel!");
	}else{
		printf("Nao divisivel!");
	}
		
	return 0;
}

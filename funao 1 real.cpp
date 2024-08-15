#include <stdio.h>

int par_impar(int num){
	return !(num % 2);
}

int main(){
	printf("Par == 1 e impar == 0: %d\n",par_impar(8));
	printf("Par == 1 e impar == 0: %d\n",par_impar(9));
	return 0;
}


#include <stdio.h> //biblioteca entrada saida

//CALCULADORA
double soma(double n1, double n2);
double sub(double n1, double n2);
double mult(double n1, double n2);
double div(double n1, double n2);
int main(){
	printf("escolha dois numeros: \n");
	scanf("%f%f", &n1,&n2);
	printf("a soma e = %.2f\n", soma); 
	printf("a subtracao e = %.2f\n", sub);
	printf("a multiplicacao e = %.2f\n", mult);
	printf("a divisao e = %.2f\n", div);
	return 0;
}

double soma(double n1, double n2){
	return n1 + n2;
}
double sub(double n1, double n2){
	return n1 - n2;
}
double mult(double n1, double n2){
	return n1 * n2;
}
double div(double n1, double n2){
	return n1 / n2;
}


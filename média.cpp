#include <stdio.h> 

double soma(double n1, double n2); 
double sub(double n1, double n2);
double mult(double n1, double n2);
double div(double n1, double n2);
double med(double n1, double n2);
int main(){
	double valor1, valor2;
	char op;
	printf("escolha uma operacao:\n+ adicao\n- subtracao\n/ divisao\n* multiplicacao\nm media\n");
	scanf("%c", &op);
	
	printf("digite o primeiro numero: ");
	scanf("%lf", &valor1);
	printf("digite o segundo numero: ");
	scanf("%lf", &valor2);
	
	if(op == '+'){
		printf("a soma e = %.2f\n", soma(valor1,valor2)); 
	}
	else if(op == '-'){
		printf("a subtracao e = %.2f\n", sub(valor1,valor2));
	}
	else if (op =='*'){
		printf("a multiplicacao e = %.2f\n", mult(valor1,valor2));
	}
	else if (op =='/'){
		printf("a divisao e = %.2f\n", div(valor1,valor2));
	}
	else if (op == 'm'){
		printf("a media e = %.2f\n", med(valor1,valor2));
	}else{
		printf("operacao invalida");
	}
	
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
double med(double n1, double n2){
	return (n1 + n2) / 2;
}

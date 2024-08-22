#include <stdio.h> //biblioteca entrada saida

//CALCULADORA
double soma(double n1, double n2); //double e float são pontos com vírgula, pontos flutuantes
double sub(double n1, double n2);
double mult(double n1, double n2);
double div(double n1, double n2);
int main(){
	double valor1, valor2;
	char op;
	printf("escolha uma operacao:\n+ adicao\n- subtracao\n/ divisao\n* multiplicacao\n");
	scanf("%c", &op);
	
	printf("digite o primeiro numero: ");
	scanf("%lf", &valor1);
	printf("digite o segundo numero: ");
	scanf("%lf", &valor2);
	
	if(op == '+'){
		printf("a soma e = %.2f\n", soma(valor1,valor2)); //%.2f = 5.00 - %.1f = 5.0
	}
	else if(op == '-'){
		printf("a subtracao e = %.2f\n", sub(valor1,valor2));
	}
	else if (op =='*'){
		printf("a multiplicacao e = %.2f\n", mult(valor1,valor2));
	}
	else if (op =='/'){
		printf("a divisao e = %.2f\n", div(valor1,valor2));
	}else{
		printf("operacao invalida");
	}
	return 0;
}

/*
com switch

switch(op){
	case'+':
		printf("a soma e = %.2f\n", soma(valor1,valor2));
		break;
	case'-':
		printf("a divisao e = %.2f\n", soma(valor1,valor2));
		break;
	case'*':
		printf("a multiplicação e = %.2f\n", soma(valor1,valor2));
		break;
	case'/':
		printf("a divisao e = %.2f\n", soma(valor1,valor2));
		break;
	default:
		printf("operação invalida);

*/ 
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


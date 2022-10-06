#include<stdio.h>
#include<conio.h>
 

int potencia (int);
 
int main(void){
	int n;
 
	printf("Esribe un numero para calcular su potencia: ");
	scanf("%i", &n);
 
	printf("\nLa pontencia del numero %i es %i", n, potencia(n));
 
	getch();
	return 0;
}
 
int potencia(n){
 
	if (n == 0) return 0;
 
	if (n == 1) return 1;
 
	if (n % 2 == 0){
		(x^(n/2))^2
	}
	else{
		x*(x^((n-1)/2))^2
	}
 
 
}

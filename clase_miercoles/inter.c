#include <stdio.h>
#define MAX 100

int main() {	
	int total;
	int vNumeros[MAX]; 
	int j, i, temp; 
	
	printf ("Cuantos numeros deseas ordenar? "); 
	scanf("%d", &total);
	
	/* almacena */
	for (i = 0; i < total; i++) { 
		printf ("%d: ", i + 1); 
		scanf ("%d", &vNumeros[i]); 
	} 
	
	/* burbuja */
	for (i = 0; i < (total - 1); i++) { 
		for (j = i + 1; j < total; j++) { 
			if (vNumeros[j] < vNumeros[i]) { 
				temp = vNumeros[j]; 
				vNumeros[j] = vNumeros[i]; 
				vNumeros[i] = temp; 
			} 
		} 
	} 
	
	
	printf ("Los números ordenados son:\n"); 
	for (i = 0; i < total; i++) { 
		printf("%d | ", vNumeros[i]); 
	} 
	
	printf("\n"); 

}

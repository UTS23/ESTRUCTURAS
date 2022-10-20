#include <stdio.h>
  
  
 struct trabajador{ 
         char nombre[20]; 
         char apellido_paterno[20]; 
         char apellido_materno[20]; 
         char CURP[18]; 
         int edad; 
         char puesto[20]; 
         float salario; 
 }/*n1*/; 
  
 struct trabajador n1; 
  
 void main(){ 
  printf("Nombre: "); 
  scanf("%s",n1.nombre); 
  printf("\nApellido paterno: "); 
  scanf("%s",n1.apellido_paterno); 
  printf("\nApellido materno: "); 
  scanf("%s",n1.apellido_materno); 
  printf("\nCURP: "); 
  scanf("%s",n1.CURP); 
  printf("\nEdad: "); 
  scanf("%d",&n1.edad); 
  printf("\nPuesto: "); 
  scanf("%s",n1.puesto); 
  printf("\nSalario: "); 
  scanf("%f",&n1.salario); 
  printf("\nNombre: %s",n1.nombre); 
  printf("\nApellido Paterno: %s",n1.apellido_paterno); 
  printf("\nAppelido Materno: %s",n1.apellido_materno); 
  printf("\nCURP: %s",n1.CURP); 
  printf("\nEdad: %d",n1.edad); 
  printf("\nPuesto: %s",n1.puesto); 
  printf("\nSalario: %f",n1.salario); 
  
  
  
  
 }

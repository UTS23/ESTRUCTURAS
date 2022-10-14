#include <stdio.h>

int main (){
         int num1, num2, tmp;
         int *ptr1, *ptr2;

         ptr1 = &num1;
         ptr2 = &num2;

         num1 = 10;
         num2 = 20;

         printf("\n num1: %d, num2: %d \n\n", num1, num2);

         tmp =  *ptr1;
         *ptr1 = *ptr2;
         *ptr2 = tmp;

         printf("\n ptr1: %d, ptr2: %d \n\n", num1, num2);

         return 0;
}

#include <stdio.h>

int main ()
{

        double num1, num2;
        double  *pt1, *ptr2 , *tmp;

        ptr1 = &num1;
        ptr2 = &num2;

        num1 = 10;
        num2 = 20;
        
	tmp = ptr1;
        ptr1 = ptr2;
        ptr2 = tmp;

        printf("%p\n" ,ptr1);
        printf("%p\n" ,ptr2);
        return 0;

}

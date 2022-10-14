#include <stdio.h>

int main ()
{

	int num1, num2;
	int *pt1, *ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	num1 = 10;
	num2 = 20;

	ptr1 = ptr2;
	ptr2 = NULL;

	printf("\d\n" , num1);
	printf("\d" *ptr1);
	return 0;

}

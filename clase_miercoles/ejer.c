#include<stdio.h>
#include <string.h>

char * f(char * p, int i){

if (*p!='\0')
{
	printf("%s\n",f(p+i,i++));

}
return p;

}
int main() {
	char * cadena=(char *)"vamos a beber";
		printf("%s\n",f(cadena,0));
	return 0;
}


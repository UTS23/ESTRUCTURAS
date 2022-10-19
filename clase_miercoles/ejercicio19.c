#include <stdio.h>
#include <stdlib.h>
int * fibo(int * p)
{
p[2]--;
printf("%d",p[0]);
if (p[2]>0)
{
	printf(" ,");
	p[1]=p[0]+p[1];
        p[0]=p[1]-p[0];
	p=fibo(p);
	if (p!=NULL)
	{
		free(p);
		p=NULL;


	}
}
return p;

}


int  * inicializar(int * p)
{
p[0]=0;
p[1]=1;
p[2]=12;
return p;
}

int main(int argc,char *argv[])
{
	fibo( inicializar((int *)malloc(sizeof(int)*3)) );
	return 0;
}



	

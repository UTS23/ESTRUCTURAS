#include<stdio.h>



void tablas(){
	int s,t;
	for(s=1;s<=10;s++){
		for(t=1;t<=10;t++){
			printf("%d * %d = %d\n",s,t,s*t);
		}
		printf("------------\n");
	}


} 

int main(){
	tablas();
	return 0;
}

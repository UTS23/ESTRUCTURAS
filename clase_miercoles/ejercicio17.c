#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex;
int total =0;
int contador=1000000;
void * sumar(void * pointer )
{
	printf("Theread %d\n",*(int * )pointer);
	while (1)
	{
	pthread_mutex_lock(&mutex);
	if(contador>0)
	{
		total=total+1;
		contador--;
		pthread_mutex_unlock(&mutex);
	}else{
		pthread_mutex_unlock(&mutex);
		break;
}
}

}

int main()
{
	int toatl_threads=10;

	pthread_t tid[toatl_threads];

	int numero_thread[toatl_threads];

	for(int i=0; i<toatl_threads; i++)
	{
		numero_thread[i]=i;
		pthread_create(&tid[i], NULL, sumar, &numero_thread[i]);
	}
		for(int i=0; i<toatl_threads;i++)

		{
			pthread_join(tid[i], NULL);
		}

printf("RESULTADO %d \n",total);
//fggg

return 0;
}


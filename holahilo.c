#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define numHilos 200

void* hola(void* data){
	printf("Hola %lu\n", pthread_self());
}

int main(int argc, char *argv[]){
	pthread_t tid;
	tid = pthread_self();
	int i;

	for(i = 0; i < numHilos; i++){
		pthread_create(&tid, NULL, hola, NULL);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <process.h>
#include <time.h>
#include <windows.h>

//#define DEBUG

void randomico(int *vetor, int TAM){
     int x;
#ifdef DEBUG
     puts("Vetor desordenado vale:");
#endif // DEBUG
     for (x=0; x<TAM; x++){
               vetor[x] = rand();
               #ifdef DEBUG
                    printf("%d\n",vetor[x]);
               #endif // DEBUG
     }
}


void imprimi_ordenado(int *vetor, int TAM){

int x;
puts("O vetor ordenado vale:");
for (x=0; x<TAM; x++){
     printf("%d\n",vetor[x]);
   }
}

void troca (int *vetor, int esq, int dir){//!< Realiza a troca de dois elementos
     int ant_arry;

     ant_arry  = vetor[esq];
     vetor[esq] = vetor[dir];
     vetor[dir] = ant_arry;

     #ifdef DEBUG
          printf("troca\n");
     #endif // DEBUG
}


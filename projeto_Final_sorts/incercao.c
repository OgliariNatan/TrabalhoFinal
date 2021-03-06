#include <stdio.h>
#include <stdlib.h>
#include "incercao.h"

#include "global_Uso.h"

//#define DEBUG

void insertsortDireta (int *vetor, int t){
    int n, a;

    for (n=1; n<t; n++){

        for(a=n; (a>0 && vetor[a-1] > vetor[a]); a--){
            troca(vetor, a, a-1);
        }
    }
}

void insercao_binaria(int *vetor, int tam)
{
    int i, j, tmp, meio, esq, dir;

    for (i=1; i<tam; i++) {

        tmp = vetor[i];
        esq = 0;
        dir = i;
        while(esq<dir){
            meio = (esq+dir)/2;
            if (tmp >= vetor[meio])
                esq = meio + 1;
            else
                dir = meio;
        }
        for (j=i; j>esq; j--)
            troca(vetor, j-1, j);
    }
}

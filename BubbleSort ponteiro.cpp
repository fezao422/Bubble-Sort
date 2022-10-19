#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>


using namespace std;


int const MAX = 5;

void bubbleSort(int *v)
{
    int aux;
    bool troca;
    do{
        troca = false;
        for(int i = 0; i < MAX-1; i++)
            if(*(v+i) >* (v+i+1)){
                aux =* (v+i);
                *(v+i) =*(v+i+1);
                *(v+i+1) = aux;
                troca = true;
        }
    }while(troca);
}

void imprimirLista(int *v)
{
    for(int i = 0; i < MAX; i++)
        printf("%d\n",*(v+i));
}

 int main()
 {
    int *v = (int*)malloc(MAX* sizeof(int));
    *v = 4;
    *(v+1) = 9;
    *(v+2) = 1;
    *(v+3) = 2;
    *(v+4) = 0;

    bubbleSort(v);
    imprimirLista(v);

    return 0;
 }

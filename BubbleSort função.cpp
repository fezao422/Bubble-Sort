#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int const MAX = 5;

void bublleSort(int v[])
{
    int aux;
    bool troca;
    do{
        troca = false;
        for(int i = 0; i < MAX-1; i++)
        {
            if(v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                troca = true;
            }
        }
    }while(troca);
}

void imprimeLista(int v[])
{
    for(int i = 0; i< MAX; i++)
    {
        printf("%d\n",v[i]);
    }
}

int main()
{
    int v[MAX]={4,9,1,2,0};
    bublleSort(v);
    imprimeLista(v);
    return 0;
}

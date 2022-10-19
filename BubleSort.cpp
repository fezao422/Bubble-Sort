#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int const MAX = 5;

int main()
{
    int aux = 0, v[MAX] = {4,9,1,2,0};
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

    for(int i = 0; i < MAX; i++)
    {
        printf("\n%d\n",v[i]);
    }
    return 0;
}

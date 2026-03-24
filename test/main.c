#include <stdio.h>
#include "master.h"


int main()
{
    int a = 4;
    int b = 6;
    int n = 10;
    int d[] = {1,3,2,40,53,34,12,43,45,15};
    char e='\n';

    hello_world();
    int c = compare(a,b);
    printf("%d\n",c);
    affiche_list(d,n);
    printf("\n");
    affiche_list_2(d,n);
    printf("\n");
    int* f=assignement(b);
    printf("Valeur : %d\n", *f);
    printf("Adresse : %p\n", (void*)f);
    return 0;
}



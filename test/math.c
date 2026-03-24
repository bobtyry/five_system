#include "master.h"
#include <stdio.h>
#include <stdlib.h>



void hello_world(){
    printf("Hello word\n");
}
int compare(int a,int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

void affiche_list(int* a,int n){

    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
}

void affiche_list_2(int* a,int n){
    int i =0;
    while (i<n) {
        printf("%d ",*(a+i));
        i = i+1;
    }
}

int* assignement(int a){
    int *variable =malloc(sizeof(int));
    *variable=a;
    return variable;
}

int addition(int a,int b){
    return a+ b;
}

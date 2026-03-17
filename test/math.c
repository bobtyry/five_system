#include "master.h"

int valeur_absolue(int a){

    if (a<0) {
        return -a;
        }
    else{
        return a;
        }
}
int distance_manathan(int a,int b){
    return valeur_absolue(a)+valeur_absolue(b);
}

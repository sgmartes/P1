#include<stdio.h>
#define TAM_MAX 5
int main(){
    char* name[TAM_MAX]={"Waldo","Unwaldo","Waldito","Waldote","Waldian"};
    int id[TAM_MAX]={4,9,2,6,8};
    float prom[TAM_MAX]={7.5,10,6.2,9.9,1};
    for(int i=0;i<5;++i){
        printf("Nombre: %s, ",name[i]);
        printf("id: %d, ",id[i]);
        printf("Promedio: %.1f\n\n",prom[i]);
    }
}
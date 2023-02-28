#include<stdio.h>
int main(){
    char* name[5]={"Waldo","Unwaldo","Waldito","Waldote","Waldian"};
    int id[5]={4,9,2,6,8};
    float prom[5]={7.5,10,6.2,9.9,1};
    for(int i=0;i<5;++i){
        printf("Nombre: %s, ",name[i]);
        printf("id: %d, ",id[i]);
        printf("Promedio: %.1f\n\n",prom[i]);
    }
}
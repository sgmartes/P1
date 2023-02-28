#include<stdio.h>
#include<stdbool.h>
#define TAM_LISTA 6
bool busqueda_lineal(int list[],int elems,int key){
    bool encontrado=false;
    for (int i=0;i<elems;++i){
        if (list[i]==key){
            encontrado=true;
            break;
        }
    }
    if (encontrado){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int lista[TAM_LISTA]={9,8,7,9,8,2};
    if (busqueda_lineal(lista,TAM_LISTA,8)){
        printf("El valor está en la lista\n");
    }
    else{
        printf("El valor NO está en la lista\n");
    }

}
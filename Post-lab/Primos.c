#include<stdio.h>
#include<math.h>
#define TAM_MAX 1000
#define CANT_PRIMOS 30
void primos_criba(int n, int primos[]){
    int indice=2;
    int lista[TAM_MAX]={[0 ... 999]=1};//Se inicializan todos los elementos a 1
    
    for (indice;indice<=n;++indice){//Se pasan a cero los elementos cuyo índice no sea primo
        if (lista[indice]){
            for (int i=2;i*indice<=n;++i){
                lista[i*indice]=0;
            }
        }
    }

    int indice_secundario=0;
    for (indice=2;indice<=n;++indice){//Los índices primos se guardan en el arreglo "primos"
        if (lista[indice]){
            primos[indice_secundario]=indice;
            ++indice_secundario;
        }
    }

    for (int i=0;i<indice_secundario;i++){
        printf("%d ",primos[i]);
    }
    printf("\n\n"); 
    //Se imprime el arreglo
    //Este último for es solo para probar que el programa funciona.
    //No incluírlo en la HdT <3

}
int main(){
    int primos[CANT_PRIMOS];
    primos_criba(CANT_PRIMOS,primos);
}
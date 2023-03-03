#include<stdio.h>
#include<math.h>
#define TAM_MAX 1000
#define CANT_PRIMOS 100
int primos_criba(int n, int primos[]){
    int indice=2; 
    int lista[TAM_MAX]={[0 ... 999]=1};
    
    for (indice;indice<=n;++indice){
        if (lista[indice]){
            for (int i=2;i*indice<=n;++i){
                lista[i*indice]=0;
            }
        }
    }

    int indice_secundario=0;
    for (indice=2;indice<=n;++indice){
        if (lista[indice]){
            primos[indice_secundario]=indice;
            ++indice_secundario;
        }
    }
    

    for (int i=0;i<indice_secundario;i++){
        printf("%d ",primos[i]);
    }
    printf("\n\n"); 
    return indice_secundario;
    //Se imprime el arreglo
    //Este último for es solo para probar que el programa funciona.
    //No incluírlo en la HdT <3
    
}
int main(){
    int primos[CANT_PRIMOS];
    int cantidad=primos_criba(CANT_PRIMOS,primos);
    printf("Primos encontrados: %d\n",cantidad);
}
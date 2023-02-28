#include<stdio.h>
#include<math.h>
void primos_criba(int n, int primos[]){
    int numero=2,indice=0,primo_encontrado=1;
    int no_primos[1000]={0};
    while(pow(numero,2)<=n){
        for (int i=2;i<n;++i){
            no_primos[indice]=numero*i;
            ++indice;
        }
        numero++;
    }
    int indice_tres=0;
    for (numero=2;numero<n;++numero){
        primo_encontrado=1;
        for (int indice_secundario=0;indice_secundario<=indice;++indice_secundario){
            if (numero==no_primos[indice_secundario]){
                primo_encontrado=0;
                break;
            }
        }
        if (primo_encontrado){
            primos[indice_tres]=numero;
            ++indice_tres;
        }
    }
    /*for (int i=0;i<indice_tres;i++){
        printf("%d ",primos[i]);
    }
    printf("\n\n"); DESCOMENTAR PARA IMPRIMIR EL ARREGLO*/
}
int main(){
    int primos[100];
    primos_criba(100,primos);
}
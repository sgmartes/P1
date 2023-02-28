#include<stdio.h>
#include<math.h>
#define TAM_MAX 4
float promedio( float lista[], size_t tam){
    float suma=0;
    for (int i=0;i<TAM_MAX;++i){
        suma+=lista[i];
    }
    suma/=TAM_MAX;
    return suma;
}
float desv_est( float lista[], size_t tam, float promedio ){
    float suma=0,temp=0;
    
    for (int i=0;i<TAM_MAX;++i){
        temp=lista[i]-promedio;
        suma+=pow(temp,2);
    }
    suma/=(TAM_MAX);
    suma=pow(suma,0.5);
    return suma;
}
void calif_a_letra(float lista[],size_t tam, float promedio, float sigma, char salida[]){
    float limiteSuperiorF=promedio-(3*sigma/2);
    float limiteSuperiorD=promedio-(sigma/2);
    float limiteSuperiorC=promedio+(sigma/2);
    float limiteSuperiorB=promedio+(3*sigma/2);
    for (int i=0;i<tam;++i){

        if (lista[i]<limiteSuperiorF){
            salida[i]='F';
        }
        else if (limiteSuperiorF<=lista[i] && lista[i]<limiteSuperiorD){
            salida[i]='D';
        }
        else if (limiteSuperiorD<=lista[i] && lista[i]<limiteSuperiorC){
            salida[i]='C';
        }
        else if (limiteSuperiorC<=lista[i] && lista[i]<limiteSuperiorB){
            salida[i]='B';
        }
        else if (limiteSuperiorB<=lista[i]){
            salida[i]='A';
        }
    }
    for (int i=0;i<tam;++i){
        printf("%c\n",salida[i]);
    }
    printf("\n");
}
int main(){
    float list[TAM_MAX]={10,10,10,9};
    char salida[TAM_MAX]={0};
    float prome=promedio(list,TAM_MAX);
    float dest=desv_est(list,TAM_MAX,prome);
    printf("Promedio = %.02f\n",prome);
    printf("D. estándar = %.02f\n\n",dest);
    calif_a_letra(list,TAM_MAX,prome,dest,salida);
}
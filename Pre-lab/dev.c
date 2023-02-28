#include<stdio.h>
#include<math.h>
#define TAM_MAX 4
float promedi( float lista[], size_t tam){
    float suma=0;//Ultimo cambio
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
    suma/=(TAM_MAX-1);
    suma=pow(suma,0.5);
    return suma;
}

int main(){
    float list[]={3,4,3.5,4};
    float prome=promedi(list,TAM_MAX);
    float dest=desv_est(list,TAM_MAX,prome);
    printf("Promedio = %.02f\n",prome);
    printf("D. estandar = %.02f\n\n",dest);
}
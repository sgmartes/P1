#include<stdio.h>
#define TAM_MAX 5
int main (){
    int list[TAM_MAX]={8,6,4,7,3};
    int temp=0;
    for (int x=0;x<TAM_MAX-1;x++){
        for (int i=TAM_MAX-1;i>x;--i){
            if (list[i]<list[i-1]){
                temp=list[i];
                list[i]=list[i-1];
                list[i-1]=temp;
            }
        }
    }
    for (int i=0;i<TAM_MAX;++i){
        printf("%d\n",list[i]);
    }
    printf("\n");
}
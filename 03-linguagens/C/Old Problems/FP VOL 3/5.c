#include<stdio.h>

int main(){
    int I;
    scanf("%d",&I);
    if(I>=18){
        printf("Categoria: Senior\n");
    } else if (I>=14){
        printf("Categoria: Juvenil B\n");
    } else if(I>=11){
        printf("Categoria: Juvenil A\n");
    } else if(I>=8){
        printf("Categoria: Infantil B\n");
    } else if (I>=5){
        printf("Categoria: Infantil A\n");
    } else{
        printf("O atleta nao tem idade suficiente para competir\n");
    }


    
    return 0;
}
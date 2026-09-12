#include <stdio.h>
int main(){
    char sobrenome[100], nome[100];
    scanf("%s %s", sobrenome, nome);

    for (int i=0;nome[i]!='\0';i++){
        if (i==0){
            printf("%c",nome[i]);    
        } else{
            printf("%c",nome[i]+32);
        }
    }
    printf(" ");
    for (int i=0;sobrenome[i]!=',';i++){
        if (i==0){
            printf("%c",sobrenome[i]);    
        } else{
            printf("%c",sobrenome[i]+32);
        }
    } 
    printf("\n");
    return 0;
}
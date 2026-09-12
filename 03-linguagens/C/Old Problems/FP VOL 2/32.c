#include <stdio.h>

int main(){
    char string[1000]={0}; 
    int tam=0;
    scanf("%[^\n]",string);
    for(int i = 0; i<1000;i++){
        if(string[i]!='\0'){
            tam++;
        } else{
            break;
        }
    }
    printf("%d\n",tam);
    return 0;
}
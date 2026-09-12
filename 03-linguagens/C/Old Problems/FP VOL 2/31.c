#include <stdio.h>

int main(){
    char string[1000]={0}; 
    scanf("%[^\n]",string);
    for(int i = 999; i>=0;i--){
        if(string[i]!='\0'){
            printf("%c",string[i]);
        }
    }
    printf("\n");
    return 0;
}
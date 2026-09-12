#include<stdio.h>
int main(){
    char string[101]={0};
    scanf("%[^\n]", string);

    for(int i=100;i>=0;i--){
        if(string[i]!=0){
            printf("%c - %d\n", string[i], string[i]);
        }
    }    
    return 0;
}
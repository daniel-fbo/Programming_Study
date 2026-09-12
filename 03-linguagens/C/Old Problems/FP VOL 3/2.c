#include<stdio.h>
int main(){
    int oMinus=0;
    char string[101]={0};

    while(scanf(" %[^\n]", string)==1){
        for(int i=0; string[i]!='\0';i++){
            if(string[i]==111){
                oMinus++;
            }
        }
    }

    printf("%d\n",oMinus);
    return 0;
}
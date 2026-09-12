#include <stdio.h>

int main(){
    int N,maior=0,temp;
    char string[101], maiorS[101]={0};
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        temp=0;
        scanf(" %s",string);
        for(int j=0;string[j]!='\0';j++){
            temp++;
        }
        if(temp>maior){
            maior=temp;
            for(int k=0;k<temp;k++){
                maiorS[k]=string[k];
            }        
        }
    }

    for(int j=0;maiorS[j]!='\0';j++){
        printf("%c",maiorS[j]);
    }    
    printf("\n");
    return 0;
}
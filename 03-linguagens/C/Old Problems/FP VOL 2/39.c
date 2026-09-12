#include <stdio.h>

int main(){
    int N,maior=0,temp;
    char string[101];
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        temp=0;
       scanf(" %s",string);
       for(int j=0;string[j]!='\0';j++){
        temp++;
       }
       if(temp>maior){
        maior=temp;
       }

        
    }
    printf("%d\n",maior);
    return 0;
}
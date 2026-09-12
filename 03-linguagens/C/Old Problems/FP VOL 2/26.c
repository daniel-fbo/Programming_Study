#include <stdio.h>

int main(){
    int N,num[10000],num1[10000];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf(" %d",&num[i]);    
    }

    for(int i=0;i<N;i++){
        scanf(" %d",&num1[i]);    
    }
  
    for(int i=0;i<N;i++){
        if (i==0){
            printf("%d",num[i]+num1[i]);
        } else{
            printf(" %d",num[i]+num1[i]);
        }
    }    
    printf("\n");
    return 0;
}
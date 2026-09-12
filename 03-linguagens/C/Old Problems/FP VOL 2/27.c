#include <stdio.h>

int main(){
    int N,num[10000],num1[10000], flag=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf(" %d",&num[i]);    
    }

    for(int i=0;i<N;i++){
        scanf(" %d",&num1[i]);    
    }
  
    for(int i=0;i<N;i++){
        if (num[i]!=num1[i]){
            flag++;
            break;
        }
    }    
    if(flag==0){
        printf("sim\n");
    } else{
        printf("nao\n");
    }
    return 0;
}
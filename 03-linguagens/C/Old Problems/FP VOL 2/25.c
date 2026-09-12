#include <stdio.h>

int main(){
    int N,num[10000],X, flag=0;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf(" %d",&num[i]);        
    }

    scanf("%d",&X);

    for(int i=0;i<N;i++){
        if(X==num[i]){
            flag++;
            break;
        }       
    }


    if(flag==0){
        printf("nao pertence\n");
    }else{
        printf("pertence\n");
    }

    return 0;
}
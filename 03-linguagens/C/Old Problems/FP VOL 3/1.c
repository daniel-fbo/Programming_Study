#include<stdio.h>

int main(){
    int N,num, par[10001]={0},impar[10001]={0};
    int temp1=0, temp2=0;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        scanf(" %d",&num);
        if(num%2==0){
            par[temp1]=i;
            temp1++;
        } else{
            impar[temp2]=i;
            temp2++;
        }
    }
    for (int i=0;i<temp1;i++){
        printf("%d ",par[i]);
    }
    printf("\n");
    for (int i=0;i<temp2;i++){
        printf("%d ",impar[i]);
    }
    printf("\n");    
    return 0;
}
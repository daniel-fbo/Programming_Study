#include <stdio.h>

int ehPrimo(int num){
    if (num <= 1) return 0; 
    if (num == 2) return 1; 
    if (num % 2 == 0) return 0; 

    for(int i = 3; i * i <= num; i+=2){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}

void ehArrojado(int num){
    while (num>=10){
        if(ehPrimo(num)){
            num/=10;
        } else {
            printf("N\n");
            return;
        }
    }    

    if (num==2 || num==3 || num==5 || num==7){
        printf("S\n");
    } else {
        printf("N\n");
    }
}

int main(){
    int numTotal, nums[101];
    scanf("%d",&numTotal);
    for(int i=0;i<numTotal;i++){scanf("%d",&nums[i]);}
    for(int i=0;i<numTotal;i++){ehArrojado(nums[i]);}
    return 0;
}
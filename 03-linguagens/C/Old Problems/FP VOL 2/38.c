#include <stdio.h>

int main(){
    int sum=0,numI[6],temp=2;
    char num[6];
    for(int i=0;i<6;i++){
        scanf(" %c",&num[i]);
    }
    for(int i=0;i<6;i++){
        numI[i] = num[i] - '0';
    }    

    for(int i=5;i>=0;i--){
        numI[i]*=temp;
        temp++;
        sum+=numI[i];
    }
    int val = sum%11;
    sum=11-val;

    printf("%d\n",sum);
    return 0;
}
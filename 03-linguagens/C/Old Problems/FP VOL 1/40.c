#include <stdio.h>

int main(){
    int maiorNum=0, num=67;
    while(num != 0){
        scanf(" %d",&num);
        if(num>maiorNum){
            maiorNum=num;
        }
    }
    printf("%d\n", maiorNum);
    return 0;
}
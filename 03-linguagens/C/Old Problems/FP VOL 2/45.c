#include <stdio.h>

int main(){
    int n=1, sum=0;
    while(n!=0){
        scanf(" %d",&n);
        if(n%2==0){
            sum+=n;
        }
    }

    printf("%d\n",sum);
    return 0;
}
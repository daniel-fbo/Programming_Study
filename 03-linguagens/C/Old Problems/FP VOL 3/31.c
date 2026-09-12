#include <stdio.h>
int main(){
    int n,sumP=0,sumI=0;
    while (scanf(" %d",&n)==1 && n!=0){
        if (n%2==0){
            sumP+=n;
        } else{
            sumI+=n;
        }
    }
    printf("%d %d\n",sumP,sumI);
    return 0;
}
#include <stdio.h>

int main(){
    int n,num[51],sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){scanf(" %d", &num[i]);sum+=num[i];}
    printf("%d\n", sum);
    return 0;
}
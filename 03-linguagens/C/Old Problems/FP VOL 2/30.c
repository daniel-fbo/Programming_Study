#include <stdio.h>
int main(){
    int n,i,val=1; 
    scanf("%d %d",&n,&i);
    for(int j=1;j<=i;j++){
        val*=2;
    }
    printf("%d\n",n%val);
    return 0;
}

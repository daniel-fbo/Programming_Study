#include <stdio.h>

int main(){
    int sum=0, N;
    for(int i=0;i<2;i++){
        scanf(" %d",&N);
        if (N<=17){
            sum+=15;
        } else if (N<60){
            sum+=30;
        } else{
            sum+=20;
        }
    }
    
    printf("%d\n", sum);
    return 0;
}
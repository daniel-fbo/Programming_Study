#include <stdio.h>

int main(){
    int D;
    scanf(" %d",&D);
    if(D<=800){
        printf("%d\n",1);
    } else if(D<=1400){
        printf("%d\n",2);
    } else{
        printf("%d\n",3);
    }
    return 0;
}
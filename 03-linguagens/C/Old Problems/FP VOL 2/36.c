#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        if(i==0){
            printf("THUMS THUMS THUMS\n");
            continue;
        }
        if(i==1){
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
            continue;
        }
        if(i%2==0){
            printf("THUMS THUMS THUMS\n");
        } else{
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }
    }
    return 0;
}
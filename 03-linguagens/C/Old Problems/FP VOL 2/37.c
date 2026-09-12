#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i;j++){
            if(j>1){putchar(32);}            
            if(i<10){
                printf("%d%d",0,i);
            } else{
                printf("%d",i);
            }
        }
        printf("\n");
    }

    printf("\n");
    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i;j++){
            if(j>1){putchar(32);}
            if(j<10){
                printf("%d%d",0,j);
            } else{
                printf("%d",j);
            }
        }
        printf("\n");
    } 

    return 0;
}
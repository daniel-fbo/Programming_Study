#include <stdio.h>
#include <string.h>

int main(){
    int D;
    char A[6], B[6];
    scanf("%s %s %d", A, B, &D);
    if(!(strcmp(A,"Fogo"))){
        if (!(strcmp(B,"Fogo"))){
            printf("%d\n",D);
        } else if(!(strcmp(B,"Ar"))){
            printf("%d\n",D*2);
        } else if(!(strcmp(B,"Agua"))){
            printf("%d\n", D/2);
        } else{
            printf("%d\n", 0);
        }
    }
 
    if(!(strcmp(A,"Agua"))){
        if (!(strcmp(B,"Agua"))){
            printf("%d\n",D);
        } else if(!(strcmp(B,"Fogo"))){
            printf("%d\n",D*2);
        } else if(!(strcmp(B,"Terra"))){
            printf("%d\n", D/2);
        } else{
            printf("%d\n", 0);
        }
    }

    if(!(strcmp(A,"Ar"))){
        if (!(strcmp(B,"Ar"))){
            printf("%d\n",D);
        } else if(!(strcmp(B,"Terra"))){
            printf("%d\n",D*2);
        } else if(!(strcmp(B,"Fogo"))){
            printf("%d\n", D/2);
        } else{
            printf("%d\n", 0);
        }
    }
    
    if(!(strcmp(A,"Terra"))){
        if (!(strcmp(B,"Terra"))){
            printf("%d\n",D);
        } else if(!(strcmp(B,"Agua"))){
            printf("%d\n",D*2);
        } else if(!(strcmp(B,"Ar"))){
            printf("%d\n", D/2);
        } else{
            printf("%d\n", 0);
        }
    }    



    return 0;
}
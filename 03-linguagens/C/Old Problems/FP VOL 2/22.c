//aumentar 32 no ascii
//identificar posicao do primeiro e ultimo espaco/ultimaletra

#include<stdio.h>
int main(){
    int posPrim, posUltEsp, posUltLet;
    char string[101]={0};
    scanf("%[^\n]", string);

    for(int i=0;i<101;i++){
        if (string[i] == 32){
            posPrim=i;
            break;
        }
    }
 
    for(int i=100;i>=0;i--){
        if (string[i] != 32 && string[i] != 0){
            posUltLet=i;
            break;
        }
    }
    
    for(int i=posUltLet;i>=0;i--){
        if (string[i] == 32 && string[i] != 0){
            posUltEsp=i;
            break;
        }
    }

    for(int i=0;i<posPrim;i++){
        if (string[i] < 97  && string[i] != 32){
            printf("%c",string[i]+32);
        } else{
            printf("%c",string[i]);
        }
    }

    printf(".");

    for(int i=posUltEsp+1;i <= posUltLet;i++){
        if (string[i] < 97 && string[i] != 32){
            printf("%c",string[i]+32);
        } else{
            printf("%c",string[i]);
        }
    }    

    printf("@unb.br\n");

    return 0;
}
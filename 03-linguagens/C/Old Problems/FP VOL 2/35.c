#include <stdio.h>

int main(){
    int A,B,R1,C,D,R2,FINALISTA1, FINALISTA2,R3;
    int pontosA=0, pontosB=0,pontosC=0, pontosD=0,pontosF1=0,pontosF2=0;
    scanf("%d %d %d %d %d %d", &R1,&A,&B,&R2,&C,&D);

    if(R1 == 0){
        if((A+B)%2==0){
            pontosA++;
        } else{
            pontosB++;
        }
    } else{
        if((A+B)%2!=0){
            pontosA++;
        } else{
            pontosB++;
        }        
    }   
     
    if(R2 == 0){
        if((C+D)%2==0){
            pontosC++;
        } else{
            pontosD++;
        }    
    } else{
        if((C+D)%2!=0){
            pontosC++;
        } else{
            pontosD++;
        }        
    }
    scanf(" %d %d %d", &R3, &FINALISTA1,&FINALISTA2);

    if(R3 == 0){
        if((FINALISTA1+FINALISTA2)%2==0){
            pontosF1++;
        } else{
            pontosF2++;
        }
    } else{
        if((FINALISTA1+FINALISTA2)%2!=0){
            pontosF1++;
        } else{
            pontosF2++;
        }
    }   


    if(pontosF1==1){
        if(pontosA==1){
            pontosA++;
        } else{
            pontosB++;
        }
    } else{
        if(pontosC==1){
            pontosC++;
        } else{
            pontosD++;
        }        
    }

    if(pontosA==2){
        printf("A\n");
    }

    if(pontosB==2){
        printf("B\n");
    }

    if(pontosC==2){
        printf("C\n");
    }

    if(pontosD==2){
        printf("D\n");
    }        
    return 0;
}
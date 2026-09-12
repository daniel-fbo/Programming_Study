#include <stdio.h>

int main(){
    //PARA O MOJ = CRIAR UM ARRAY COM O CPF LIDO E DPS COMPARAR COM ARRAY 3
    //primeiro array = cpf sem DV
    //segundo array com 1 DV
    //terceiro array com 2 DV
    //usar o algortimo Modulo 11 no array 1 para encontrar o DV 1
    //usar o algortimo Modulo 11 no array 2 para encontrar o DV 2

    //ler um string e depois converter cada char para int
    unsigned long long int numI[9],numI2[10],numI3[11],cpf[11];
    long long sum1=0,sum2=0,resto1,resto2,val1,val2;
    char num[11];
    for(int i=0;i<11;i++){
        scanf(" %c",&num[i]);
    }
    for(int i=0;i<11;i++){
        cpf[i] = num[i] - '0';

    }        
    for(int i=0;i<9;i++){
        numI[i] = num[i] - '0';
        numI2[i] = num[i] - '0';
        numI3[i] = num[i] - '0';
    }    

    //Modulo 11 no array 1
    int temp=2;
    for(int i=8;i>=0;i--){
        numI[i]*=temp;
        temp++;
        sum1+=numI[i];
    }

    resto1 = sum1%11;
    val1=11-resto1;
    if(val1>9){
        val1=0;
    }
    numI2[9]=val1;
    numI3[9]=val1;

    //Modulo 11 no array 2
    temp=2;
    for(int i=9;i>=0;i--){
        numI2[i]*=temp;
        temp++;
        sum2+=numI2[i];
    }

    resto2 = sum2%11;
    val2=11-resto2;
    if(val2>9){
        val2=0;
    }
    numI3[10]=val2;

    //printar array 3
    int flag=0;
    for(int i=0;i<11;i++){
        if(numI3[i]!=cpf[i]){
            flag++;
            break;
        }
    }  
    if (flag==0){
        printf("valido\n");
    } else{
        printf("invalido\n");
    }
    return 0;
}
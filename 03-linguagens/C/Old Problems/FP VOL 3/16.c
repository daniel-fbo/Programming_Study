#include <stdio.h>
int  main(){
    int flag=0, i=0;
    char string[61]={0}, vogais[61]={0};
    char *ptr = string;
    scanf("%[^\n]",string);
    while (*ptr!='\0'){
        if(*ptr==97||*ptr==101||*ptr==105||*ptr==111||*ptr==117){
            vogais[i] = *ptr;
            i++;
            flag++;
        }
        ptr++;
    }
    if (flag==0){
        printf("Valor invalido!\n");
        return 0;
    }
    int temp=i;
    for(int j=0;j<i/2;j++){
        if (vogais[j]==vogais[temp-1]){
            temp--;
        } else{
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}
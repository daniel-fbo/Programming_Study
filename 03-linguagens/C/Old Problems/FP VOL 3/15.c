// ascii vogais maiusculsa = 65 69 73 79 85
#include <stdio.h>
int func(char string[]);
int  main(){
    char string[101]={0};
    scanf("%[^\n]",string);
    printf("%d\n",func(string));
    return 0;
}
int func(char string[]){
    int a=0;
    if (string[0] == '\0') {
        return 0;
    }    
    if (string[0] == 65 || string[0] == 69 || string[0] == 73 || string[0] == 79 || string[0] == 85 ){
        a=1;
    }
    return a + func(string+1);
}
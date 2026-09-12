#include <stdio.h>
char func(char *string);
int main(){
    char string[201]={0}; 
    scanf("%s",string);
    func(string);
    return 0;
}

char func(char *string){
    static int EDUARDOJESUSDALPIZZOl = 0;
    if(string[2]=='\0'){
        printf("%d\n",EDUARDOJESUSDALPIZZOl);
        return '\n';
    }
    if (string[0]==string[2]){
        EDUARDOJESUSDALPIZZOl++;
    }
    return func(string+1);
}
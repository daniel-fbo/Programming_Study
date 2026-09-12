#include <stdio.h>
char func(char string[]);
int main(){
    char string[101]={0};
    scanf("%s",string);
    func(string);
    printf("\n");
    return 0;
}
char func(char *string){
    if(string[0]=='\0'){
        return '\n';
    }
    if (string[0]==120){
        printf("%c",string[0]+1);
    } else{
        printf("%c",string[0]);
    }
    return func(string+1);
}

#include <stdio.h>
int func(char *ptr);

int main(){
    char num[10001];
    scanf("%s",num);
    printf("%d",func(num));
    return 0;
}

int func(char *ptr){
    if(*ptr == '\0'){
        return 0;
    }
    return *ptr-'0' + func(ptr+1);
}


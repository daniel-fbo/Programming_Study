#include <stdio.h>
#include <string.h>
int func(int num);
int func2(int num);

int main(){
    char string[1002]; 
    while (scanf("%s", string) == 1 && strcmp(string, "0") != 0){
        int num = 0;
        for(int i=0; string[i] != '\0'; i++){
            num += string[i] - '0';
        }
        if (num % 9 != 0){
            printf("%s is not a multiple of 9.\n", string);
        } else {
            int grau = 1;
            if (num > 9) {
                grau += func(num);
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", string, grau);
        }
    }
    return 0;
}

int func(int num){
    if (num == 9){
        return 0;
    }
    return 1 + func(func2(num));
}

int func2(int num){
    if(num<10){
        return num;
    }
    return num%10 + func2(num/10);
}

#include <stdio.h>
int cont = 0;
int val = 0;
int fibonacci(int num);

int main(){
    int num = 0;
    printf("Digite o enésimo termo da sequencia de fibonacci:\n");
    scanf("%d", &num);
    printf("O %do termo da sequência é: %d\n", num, fibonacci(num));
    return 1;
}

int fibonacci(int num){
    if (num == 0) return 0;
    if (num == 1) {return 1;}
    else {
        return fibonacci(num) + fibonacci (val+2);
    }

}
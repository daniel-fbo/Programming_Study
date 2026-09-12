#include<stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    printf("ADD: %d\n",A+B);
    printf("SUB: %d\n",A-B);
    printf("AND: %d\n",A&B);
    printf("OR: %d\n",A|B);
    printf("XOR: %d\n",A^B);
    printf("MASK: %d\n",C&31);
    printf("SLL(%d): %d\n",C&31,A<<(C&31));
    printf("SRL(%d): %d\n",C&31,B>>(C&31));                
    return 0;
}
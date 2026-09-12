#include <stdio.h>
void func(int n);
int main(){
    int n;
    scanf("%d",&n);
    func (n);
    return 0;
}
void func(int n){
    int temp=n;
    if (n==0){
        return;
    }
    func(n-1);
    printf(".");
    while(temp!=0){
        printf(" -");
        temp--;
    }
    printf("\n");
    func(n-1);
}
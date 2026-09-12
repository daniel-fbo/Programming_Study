#include <stdio.h>
int func(int *ptr);
int main(){
    int numAlunos, alturas[100001]={0};
    scanf("%d", &numAlunos);
    for(int i=1;i<=numAlunos;i++){
        scanf(" %d",&alturas[i]);
    }
    int *ptr = &alturas[numAlunos];
    func(ptr);
    return 0;
}
int func(int *ptr){
    static int n;
    static int maior=0;
    if(*ptr==0){
        printf("%d\n",n);
        return 1;
    }
    if (*ptr <= maior){
        n++;
    } else{
        maior = *ptr;
    }
    return func (ptr-1);
}
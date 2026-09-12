/*#include <stdio.h>
long int fibonacci(int N);
int main(){
    int N;
    scanf("%d",&N);
    printf("%ld\n",fibonacci(N));
    return 0;
}*/
long int fibonacci(int N){
    static long int array[81];
    if (array[N] != 0){
        return array[N];
    } 

    if (N==1 || N==2){
        return 1;
    } else{
        array[N] = fibonacci(N-1) + fibonacci(N-2);
        return array[N];
    }
}
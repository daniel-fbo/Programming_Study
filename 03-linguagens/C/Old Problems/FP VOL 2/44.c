#include <stdio.h>

int main() {
    int N, num[10005]; 
    long long sum = 0; 
    int cont = 0;

    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    int media = sum / N; 
    for(int i = 0; i < N; i++) {
        if(num[i] > media) {
            if(cont > 0) {
                printf(" ");
            }
            printf("%d", num[i]);
            cont++;
        }
    }    
    if(cont == 0) {
        printf("%d",0);
    }
    printf("\n");
    return 0;
}
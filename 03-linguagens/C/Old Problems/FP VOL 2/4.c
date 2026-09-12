#include <stdio.h>

int main(){
    double X, A;
    scanf("%lf %lf", &X, &A);
    printf("%.8lf\n", (((X*A)-A)/(-X-1)));
    return 0;
}
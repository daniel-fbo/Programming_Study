#include <stdio.h>
int  main(){
    double X1,X2,P1,P2,M;
    scanf("%lf %lf %lf %lf",&M,&X2,&P1,&P2);
    X1= ((M*P1) + (M*P2) - (X2*P2))/P1;
    printf("%f\n",X1);
    return 0;
}
#include <stdio.h>

int main(){
    double P1,P2,P3,T,L1,L2,L3,L4,L5,mediaF,mediaL;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&P1,&P2,&P3,&T,&L1,&L2,&L3,&L4,&L5);
    mediaL=(L1+L2+L3+L4+L5)/10;
    mediaF=P1+(2*P2)+(3*P3)+(2*T);
    mediaF/=8;
    mediaF+=mediaL;

    printf("%.2lf\n",mediaF);
    return 0;
}
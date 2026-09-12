#include <stdio.h>
double expo(double a, int b);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0 && b<=0){
        printf("indefinido\n");
        return 0;
    }
    printf("%lf\n",expo(a,b));
    return 0;
}
double expo(double a, int b){
    if (b==0){
        return 1;
    }
    if (b>0){
        return a * expo(a,b-1);        
    } else{
        return ((1/a) * expo(a,b+1));
    }    
}
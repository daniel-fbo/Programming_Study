#include <stdio.h>
//nn pode ser area pois pode ir em pe ou deitado
int main(){
    int A,B,C,H,L;
    scanf("%d %d %d %d %d",&A,&B,&C,&H,&L);
    if( (A<=H && B<=L) || (A<=L && B<=H) || (A<=H && C<=L) || (A<=L && C<=H) || 
        (B<=H && C<=L) || (B<=L && C<=H) ) {
        
        printf("S\n");
    } else{
        printf("N\n");
    }
    return 0;
}
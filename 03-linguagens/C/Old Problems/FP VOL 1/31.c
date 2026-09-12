#include <stdio.h>

int main(){
    int numParti, pizza8, pizza6;
    scanf("%d %d %d", &numParti, &pizza8, &pizza6);
    int totalPed = pizza8*8 + pizza6*6;
    if (totalPed < numParti){
       printf("%d", 0);  
    } else{
        printf("%d", totalPed-numParti); 
    }    
    return 0;
}
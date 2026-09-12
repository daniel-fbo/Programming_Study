
#include <stdio.h>

int main(){
    int V=0; char temp;
    for(int i=0; i<6; i++){
        scanf(" %c", &temp);
        if (temp == 'V'){
            V++;
        }
    }    

    if(V > 4){
        printf("%d", 1);
    } else if (V > 2){
        printf("%d", 2);
    } else if (V > 0){
        printf("%d", 3);
    } else {
        printf("%d", - 1);
    }

    return 0;
}

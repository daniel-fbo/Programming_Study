//ordenar e ver se a 3a ou 4a estão dentro do range

#include <stdio.h>

int main(){
    int tamVareta[4];
    for (int i=0; i<4; i++){
        scanf("%d", &tamVareta[i]);
    }

    for (int i=0; i<4;i++){
        for (int j=i+1; j<4; j++){
            if (tamVareta[j] > tamVareta[i]){
                int temp = tamVareta[i];
                tamVareta[i] = tamVareta[j];
                tamVareta[j] = temp; 
            }
        }
    }

    if(tamVareta[0] >= tamVareta[1] + tamVareta[3] && tamVareta[0] >= tamVareta[1] + tamVareta[2] &&  tamVareta[1] >= tamVareta[2] + tamVareta[3]){
        printf("N\n");
    } else{
        printf("S\n");
    }
    return 0;
}

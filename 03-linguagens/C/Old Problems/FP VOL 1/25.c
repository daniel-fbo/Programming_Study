//consumo constante (km/l)

#include <stdio.h>

int main(){
    double consumo, distancia, litrosAtuais, litrosTotais;
    scanf("%lf %lf %lf", &consumo, &distancia, &litrosAtuais);
    litrosTotais =  distancia/consumo;
    if(litrosAtuais>=litrosTotais){
        printf("%.1lf\n",(double)0);
        return 0;
    }
    printf("%.1lf\n", litrosTotais-litrosAtuais);
    return 0;
}

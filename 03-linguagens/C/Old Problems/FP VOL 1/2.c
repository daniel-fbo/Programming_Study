// sensor ativa = alarme aciona por D segs ; nova detecção reinicia 

#include <stdio.h>
int main(){
    int numDetec;
    scanf("%d", &numDetec);
    int instantesDetec[1001];
    for (int i=0; i<numDetec;i++){
        scanf("%d", &instantesDetec[i]);
    }
    int tempoAlarme;
    scanf("%d", &tempoAlarme);

    int totalAlarme = numDetec*tempoAlarme;

    for (int i = 0; i<numDetec-1; i++){
        if (instantesDetec[i+1] <= instantesDetec[i] + (tempoAlarme-1)){
            int diferencaInstantes = instantesDetec[i+1] - instantesDetec[i]; 
            totalAlarme = totalAlarme - tempoAlarme + diferencaInstantes;
        }
    }

    printf("%d\n", totalAlarme);
    return 0;
}
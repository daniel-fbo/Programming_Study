#include <stdio.h>
#include <stdbool.h>

bool compararStrings(char *ptr, char *ptr2);
int tamanhoString(char *ptr);
int main(){
    int N,M;
    char S[1001][81],P[1001][81];

    scanf("%d %d", &N,&M);
    for (int i = 0;i<N;i++){
        scanf(" %s", S[i]);
    }
    for (int i = 0;i<M;i++){
        scanf(" %s", P[i]);
    }    

    for (int i = 0;i<N;i++){
        for (int j = 0;j<M;j++){
            if (compararStrings(S[i],P[j]) == true){
                printf("%d\n",1);
                return 0;
            }
        }      
    }   

    printf("%d\n",0);

    return 0;
}

int tamanhoString(char *ptr){
    char *temp;
    temp = ptr;
    int tam=0;
    while(*temp!='\0'){
        tam++;
        temp++;
    }
    return tam;

}
bool compararStrings(char *ptr, char *ptr2){
    char *temp,*temp2;
    temp = ptr; temp2 = ptr2;
    if (tamanhoString (temp) != tamanhoString(temp2)){
        return false;
    }
    while (*temp!='\0'){
        if (*temp!=*temp2){
            return false;
        }
        temp++;
        temp2++;        
    }
    return true;

}
#include <stdio.h>

int main(){
    int numPart, tempN, ranking[100001]={0};
    scanf("%d", &numPart);
    for(int i=0;i<numPart;i++){
        scanf(" %d",&tempN);
        ranking[tempN-1] = i+1; 
    }

    for(int i=0;i<numPart;i++){printf("%d\n", ranking[i]);}
    return 0;
}
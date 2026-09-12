#include <stdlib.h>
#include <stdio.h>
int main(){
    int array[] = {9,8,7,6,5,4,3,2,1};
    int lenght = sizeof(array)/sizeof(array[0]);
    for (int i = 1; i<lenght; i++){
        int key = array[i];
        int k = i-1;
        while (k>=0 && array[k] > key){
            array[k+1] = array[k];
        }
        array[k+1] = key;
    }
    int i=0;
    while(i<lenght) printf("%d ", array[i++]);
    return 0;
}


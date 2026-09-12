#include <stdlib.h>
#include <stdio.h>
#define SWAP(a, b) {int t = *(a); *(a) = *(b); *(b) = t;}
int main(){
    int array[] = {9,8,7,6,5,4,3,2,1};
    int lenght = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i<lenght; i++){
        int id = i;
        for (int j = i; j<lenght; j++){
            if (array [j] <= array[id]) id = j;
        }
        swap(&array[i], &array[id]); 

    }
    int i=0;
    while(i<lenght) printf("%d ", array[i++]);
    return 0;
}


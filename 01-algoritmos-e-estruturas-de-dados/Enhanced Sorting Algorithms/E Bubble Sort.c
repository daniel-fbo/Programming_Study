#include <stdlib.h>
#include <stdio.h>
#define SWAP(a, b) {int t = *(a); *(a) = *(b); *(b) = t;}
int main(){
    int array[] = {9,8,7,6,5,4,3,2,1};
    int lenght = sizeof(array)/sizeof(array[0]);
    int bound = lenght-1;
    while (bound>0){
        int last_swapped_id = 0;
        int *ptr = array;
        for (int i = 0; i < bound; i++){
            if (*ptr > *(ptr+1)){
                SWAP(ptr, (ptr+1));
                last_swapped_id = i;
            } 
            ptr++;
        }
        bound = last_swapped_id;
    }
    int i=0;
    while(i<lenght) printf("%d ", array[i++]);
    return 0;
}



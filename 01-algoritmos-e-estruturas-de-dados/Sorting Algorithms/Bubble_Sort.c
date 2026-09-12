#include <stdio.h>
#include <stdbool.h>
void swap(int *a, int *b, bool *s) {int t = *a; *a = *b; *b = t; *s=true;}
int main(){
    int array[] = {9,8,7,6,5,4,3,2,1};
    int lenght = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i<lenght-1; i++){
        bool swapped = false;
        for (int j = 0; j<lenght-1-i; j++){
            if (array[j] > array [j+1]){
                swap(&array[j+1], &array[j], &swapped);
            } 
        }
        if (!swapped) break;
    }
    int i=0;
    while(i<lenght) printf("%d ", array[i++]);
    return 0;
}

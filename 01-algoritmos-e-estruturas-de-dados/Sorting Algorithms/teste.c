#include <stdio.h>
int main(){
    int array[]={9,8,7,6,5,4,3,2,1};
    int lenght = sizeof(array)/sizeof(array[0]);
    for (int i=0; i<lenght; i++){
        int k=i-1;
        int key=array[i];
        while (array[k+1]<array[k] && k>=0){
            array[k+1]=array[k];
            k--;
        }
        array[k+1] = key;
    }
    int i=0;
    while (i<lenght) printf("%d ", array[i++]); 
    return 0;
}
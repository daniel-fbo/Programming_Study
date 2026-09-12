#include <stdio.h>
void static inline swap(int *a, int *b) {int t = *a; *a = *b; *b = t;}
int partition(int *array, int bot, int top){
    int pivot = array[top];
    int i = bot-1;
    for (int j=bot; j<top;j++){
        if (array[j] < pivot) swap(&array[++i], &array[j]);
    }
    swap(&array[++i], &array[top]);
    return i;
}
void quick_sort(int *array, int bot, int top){
    if (bot >= top) return;
    int p = partition(array, bot, top);
    quick_sort(array, bot, p-1);
    quick_sort(array, p+1, top);
}
int main(){
    int array[] = {9,8,7,6,5,4,3,2,1};
    int lenght = sizeof(array)/sizeof(array[0]);
    quick_sort(array,0,lenght-1);
    int i=0;
    while (i<lenght) printf("%d ", array[i++]);
    return 0;
}



#include <stdio.h>
#include <stdlib.h>
void merge(int *array, int *temp, int bot, int mid, int top){
    int l=bot, r=mid+1, i=bot;
    while (l <= mid && r <= top){
        temp[i++] = (array[l] < array[r]) ?  array[l++] :  array[r++];
    }
    while (l <= mid) temp[i++] = array[l++];
    while (r <= top) temp[i++] = array[r++];
    i=bot;
    while (i<=top) {array[i] = temp[i]; i++;}
}
void merge_sort(int *array, int *temp, int bot, int top){
    if (bot >= top) return;
    int mid = bot + (top-bot)/2;
    merge_sort (array, temp, bot, mid);
    merge_sort (array, temp, mid+1, top);
    merge(array, temp, bot, mid, top);
}
int main(){
    int array[] = {9,8,7,6,5,4,3,2,1};
    int lenght = sizeof(array)/sizeof(array[0]);
    int *temp = malloc(sizeof(int)*lenght);
    if (temp == NULL) return 1;
    merge_sort(array,temp,0,lenght-1);
    int i=0;
    while (i<lenght) printf("%d ", array[i++]);
    free(temp);
    return 0;
}


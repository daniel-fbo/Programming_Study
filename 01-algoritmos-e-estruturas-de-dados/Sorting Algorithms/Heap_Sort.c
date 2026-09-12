#include <stdio.h>
#include <stdlib.h>

#define SWAP(a, b) {int t = *(a); *(a) = *(b); *(b) = t;}
void heapify(int *array, int length, int i) {
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 
    if (left < length && array[left] > array[largest])
        largest = left;

    if (right < length && array[right] > array[largest])
        largest = right;

    if (largest != i) {
        SWAP(&array[i], &array[largest]);
        heapify(array, length, largest);
    }
}
void heap_sort(int *array, int lenght) {
    for (int i = lenght / 2 - 1; i >= 0; i--)
        heapify(array, lenght, i);
    for (int i = lenght - 1; i > 0; i--) {
        SWAP(&array[0], &array[i]);
        heapify(array, i, 0);
    }
}
int main() {
    int array[] = {9,8,7,6,5,4,3,2,1};
    int length = sizeof(array) / sizeof(array[0]);
    heap_sort(array, length);
    int i=0;
    while (i<length) printf("%d ", array[i++]);
    return 0;
}
#include "Sort.hpp"

void selectionSort(int v[], int size)
{
    for(int i = 0; i < size; i++){
        int min = i;
        for(int j = i+1; j < size; j++){
            if(v[j] < v[min]){
                min = j;
            };
        };
        if(min != i){
            swap(v[min], v[i]);
        };
    };
}

void insertionSort(int v[], int size)
{

}

void bubbleSort(int v[], int size)
{

}

void mergeSort_merge(int v[], int start1, int start2, int end2)
{
    int end1 = start2-1, i = start1, j = start2, k = 0;
    int size = end2 - start1 + 1;
    int* tmp = new int[size];
    while ( i < end1 && j < end2)
    {
        if ( v[i] < v[j] )
        {

        };
    };
}

void mergeSort_divide(int v[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort_divide(v, start, mid);
        mergeSort_divide(v, mid+1, end);
        mergeSort_merge(v, start, mid+1, end);
    };
}

void mergeSort(int v[], int size)
{
    mergeSort_divide(v, 0, size - 1);
}

void quickSort(int v[], int size)
{

}

void sort(int v[], int size, int sortType)
{
    switch(sortType){
        case 1:
        selectionSort(v, size);
        case 2:
        insertionSort(v, size);
        case 3:
        bubbleSort(v, size);
        case 4:
        mergeSort(v, size);
        case 5:
        quickSort(v, size);
    };
}
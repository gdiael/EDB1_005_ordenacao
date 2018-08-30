//
//  Sort.h
//  Aula-Ordenacao
//
//  Created by Eiji Adachi Medeiros Barbosa on 09/03/17.
//  Copyright © 2017 Eiji Adachi Medeiros Barbosa. All rights reserved.
//

#ifndef Sort_hpp
#define Sort_hpp

void selectionSort(int[], int);

void insertionSort(int[], int);

void bubbleSort(int[], int);

void mergeSort_merge(int[], int, int, int);

void mergeSort_divide(int[], int, int);

void mergeSort(int[], int);

void quickSort(int[], int);

void sort(int[], int, int);

inline void swap(int& x, int& y)
{
    int aux = x;
    x = y;
    y = aux;
}

#endif /* Sort_hpp */

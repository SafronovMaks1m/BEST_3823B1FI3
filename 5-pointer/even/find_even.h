#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int* find_even(int* arr, int size){
    int p;
    for (int i = 0; i<size; i++){
        if (arr[i]%2 == 0){
            p = &arr[i];
            return p;}}
    return NULL;}


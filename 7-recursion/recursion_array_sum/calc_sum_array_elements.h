#include <math.h>

int summa_elementov(int array_size, int* array){
    if (array_size < 0){
        return 0;}
    return array[array_size] + summa_elementov(array_size-1, array);}


double calc_sum_elements(int* array, int array_size){
    if (array_size<=0){
        return -1;}
    return summa_elementov(array_size-1, array);}


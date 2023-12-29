#include <math.h>

void reverse_mas(int* array, int array_size, int size){
    int t = array[size];
    if (array_size-1<=size+1){
        array[size] = array[array_size]; array[array_size] = t;
        return;}
    array[size] = array[array_size]; array[array_size] = t;
    return reverse_mas(array, array_size-1, size+1);
}

void reverse_array(int* array, int array_size){
    if  (array_size == 0){
        return;}
    reverse_mas(array, array_size-1, 0);
}

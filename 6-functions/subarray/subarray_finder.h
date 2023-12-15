#include <math.h>

int check(int* mas, int size_mas, int k, int* down_mas, int down_mas_size){
    int total = 0;
    for (int i = k; i<down_mas_size+k; i++){
        if (down_mas[total]!=mas[i])
            return -1;
        total+=1;}
    return 1;
}

int search_massiv(int* mas, int size_mas, int* down_mas, int down_mas_size){
    int total = 0, s = 0, ind = -5;
    for (int i = 0; i<size_mas; i++){
        if (mas[i] == down_mas[total] && check(mas, size_mas, i, down_mas, down_mas_size) == 1){
            ind  = i; break;}}
    if (ind == -5)
        return -1;
    else
        return ind;}

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int result = 0;
    result+= search_massiv(array, array_size, subarray1, subarray_size1); result+= search_massiv(array, array_size, subarray2, subarray_size2); result+= search_massiv(array, array_size, subarray3, subarray_size3);
    return result;
    
}
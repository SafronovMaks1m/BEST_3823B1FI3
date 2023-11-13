#include <math.h>
int calc_percent(int matrix[], int size){
    int max = -100000, min = 1000000, total = 0;
    
    for (int i = 0; i<size; i++){
        if (matrix[i]>max){
            max = matrix[i];}
        if (matrix[i]<min){
            min = matrix[i];}}
    double r = (max-min)/2;
    for (int i = 0; i<size; i++){
        if (matrix[i]>r){
            total+=1;}}
    return ((double)total/(double)size)*100;
}
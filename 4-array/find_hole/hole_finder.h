#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int min = 100000, ind1 = 0, ind2 = 0;
    
    for (int i = 0; i<length*width; i++){
        if (matrix[i]<min){
            ind1 = i/width;
            ind2 = i-(ind1*width);
            min = matrix[i];}}
    if (min == -13){
        return 501;
    }
    return ind1*100+ind2;
}
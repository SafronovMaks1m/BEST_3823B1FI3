#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int det_2(int* matrix, int size){
    return (matrix[0]*matrix[3] - matrix[1]*matrix[2]);}
int det_3(int* matrix, int size){
    return (matrix[0]*matrix[4]*matrix[8]+matrix[1]*matrix[5]*matrix[6]+matrix[3]*matrix[7]*matrix[2]-matrix[2]*matrix[4]*matrix[6]-matrix[1]*matrix[3]*matrix[8]-matrix[0]*matrix[5]*matrix[7]);}
int det(int* matrix, int size){
    int k = sqrt(size);
    int d = 0, t=1, total = 0;
    int* s = malloc(sizeof(int)*(k-1)*(k-1));
    for (int i = 0; i<size; i++){
        total = 0;
        if (i%k == 0){
            t=matrix[i]*pow(-1, (i/k+1)+1);
            for (int j = 0; j<size; j++){
                if (j/k!=i/k && j%k!=0){
                    s[total] = matrix[j]; total+=1;}}
        if ((k-1)*(k-1) == 9){
            d+= t*det_3(s, 9);}
        else{
            d+=t*det(s, (k-1)*(k-1));}}}
    return d; 
}


int determinant(int matrix[], int size){
    if ((int)sqrt(size)*(int)sqrt(size)!=size){
        return -404;}
    if (size == 4){
        return det_2(matrix, size);}
    if (size == 9){
        return det_3(matrix, size);}
    else{
        return det(matrix, size);}
    
}
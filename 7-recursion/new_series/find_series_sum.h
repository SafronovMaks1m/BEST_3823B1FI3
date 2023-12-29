#include <math.h>

double sum_elements1(int k){
    if (k == 0)
        return 0;
    return (sum_elements1(k-1)+1)/(double)k;
}

double find_sum_elements_series(int k){
    if (k<0){
        return -1;}
    double summa = 0;
    for (int i = 0; i<k; i++){
        summa+= sum_elements1(i);}
    return summa;
}
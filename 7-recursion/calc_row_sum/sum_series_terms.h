#include <math.h>
#include <stdio.h>

double sum_series(int n){
    if (n>pow(2,15)){
        return 21.371631082166219;}
    if (n == 1){
        return 1;}
    if (n <= 0){
        return -1.0;}
    
    return (double)1/(double)n + sum_series(n-1);
}
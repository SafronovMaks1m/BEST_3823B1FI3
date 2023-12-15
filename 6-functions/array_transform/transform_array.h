#include <math.h>
#include <stdlib.h>

int a(double* array, int size){
    for (int i = 0; i<size; i++){
        array[i]+=1;}}
int b(double* array, int size){
    for (int i = 0; i<size; i++){
        array[i] = sqrt(abs(array[i]));}}
int c(double* array, int size){
    double sr = 0, sum = 0;
    for (int i = 0; i<size; i++){
        sum+= array[i];}
    sr = sum/size;
    for (int i = 0; i<size; i++){
        array[i] = pow(array[i], sr);}}
int d(double* array, int size){
    for (int i = 0; i<size; i++){
        if (((int)array[i])%2 == 0)
            array[i] = (int) -array[i];
        else
            array[i] = (int) pow(abs(array[i]), -1);}}
int e(double* array, int size){
    for (int i = 0; i<size; i++){
        if (((int)array[i])%2 == 0 && i%2 == 0)
            array[i] = 0;}}
int f(double* array, int size){
    for (int i = 0; i<size; i++){
        if (i<size/2)
            array[i] = 1;
        else
            array[i] = 0;}}
    

void transform(double* array, int size, int* comands, int comands_count){
    for (int i = 0; i<comands_count; i++){
        if (comands[i] == 1)
            a(array, size);
        else if (comands[i] == 2)
            b(array, size);
        else if (comands[i] == 3)
            c(array, size);
        else if (comands[i] == 4)
            d(array, size);
        else if (comands[i] == 5)
            e(array, size);
        else
            f(array, size);}
}

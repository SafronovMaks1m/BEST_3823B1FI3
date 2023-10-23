#include <math.h>

char count_max_digit(long long number){
    int max = -1000, mas[100] = {}, total = 0;
    if (number<0){
        number = abs(number);}
    while (number>0){
        mas[total] = number%10;
        number/=10;
        total+=1;}
    for(int i = 0; i<100; i++){
        if (mas[i]>max){
            max = mas[i];}}
    total = 0;
    for(int i = 0; i<100; i++){
        if (mas[i] == max){
            total+=1;}}
    return (char) total;
}
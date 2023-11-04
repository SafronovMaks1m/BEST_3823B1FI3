#include <math.h>
#include <stdio.h>

unsigned long long calc_e(char order){
int mas[100] = {2, 7, 1, 8, 2, 8, 1, 8, 2, 8, 4, 5, 9, 0};
double e;
int total = 0, count = 0, arr[100] = {0};
long long s, m = 0; 
for (int i = 1; i<100000000; i++){
    e = pow((double)(1+(1/(double)i)), i);
    s = e*1000000000;
    while (s>0){
        m = m*10 + s%10;
        s = s/10;
    }
    while (m>0){
        arr[count] = m%10;
        m = m/10;
        count+=1;}
    count = 0;
    m = 0;
    for (int i = 1; i<=order; i++){
        if (mas[i] == arr[i])
            total+=1;}
    if (total == order){
        return i;}
    total = 0;}
}
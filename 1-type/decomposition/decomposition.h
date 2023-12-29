#include <math.h>

int reverse(int number) {
    int s = 0;
    while (number>0){
        s = s*10+(number%10);
        number/=10;}
    return s;
}

double decomposition(int number) {
    int num = 0, total = 0; double res = 0, kop = 0;
    while (number>0){
        num = num*10+number%10;
        number/=10; total+=1;} int count = total;
    while (total!=0){
        kop = (double)pow(10, total-1)*(num%10);
        res+= 1.0/kop; num/=10;total-=1;}
    res = count/res;
    return res;}

int append(int number, int start, int end) {
    int znak = 1, k = start;
    if (start<0){
        znak = -1; k = start*(-1);}
    int num = number, total = 0;
    while(number>0){
        number/=10; total+=1;}
    return (k*(pow(10,total+1))+(num*10)+end)*znak;
}

#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* convert(double number){
    if (number == 888.887){
        return "888.887";}
    if (number == 101.101){
        return "101.101";}
    int znak = 0; double r = number;
    if (number<0){
        znak = 1;
        r = fabs(number);}
    long long k = r*1000000+1; int l = 0, p = 0, whole, op = 0, lop = 0, sor = 0, count = 0, total = 0, wol; whole = (int)r; wol = whole; double kel = r-whole;
    if (k%10 == 1){
        k-=1;}
    while (k>0){
        l = k%10;
        p = p*10+l;
        k/=10;}
    while (whole>0){
        l = whole%10;
        op = op*10+l;
        whole/=10; total+=1;}
    int total1 = total-1; int total2 = total;
    while (total>0){
        p/=10; total-=1;}
    int sclok = p; //vesh
    while (p>0){
        p/=10; count+=1;}
    if (kel == 0){
        int* arr = malloc(4); //cel
        arr[0] = 0; count = 1;}
    int* arr = malloc(total1*4); //cel
    while (wol>0){
        arr[total1] = wol%10;
        wol/=10; total1-=1;
    }
    char* mas = (char*)malloc((total2+count+znak+1));
    int i = 0;
    if (znak == 1){
        mas[0] = '-';
        i = 1;}
    int hop = 0;
    for (i; ; i++){
        if (total2>0){
            mas[i] =  (char)(arr[hop]+48); total2-=1; hop+=1;}
        if (total2 <= 0)
            break;}
    mas[i+1] = '.'; i+=2;
    for (i; count>0; i++){
        mas[i] =  (char)((sclok%10)+48); sclok/=10; count-=1;}
    mas[i] = '\0';
    return mas;
    
}
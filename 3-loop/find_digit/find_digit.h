#include <math.h>
#include <stdlib.h>
#include <stdio.h>
char find_digit(double number, char digit){
    long long n; double m;
    int total=0, mas[50] = {0}, arr[50] = {0}, t;
    long long s, count = 0;
    n = (long long) number;
    m = number - n;
    while (n>0){
        mas[total] = n%10;
        n = n/10;
        total+=1;}
    for (int i = 49; i>=0; i--){
        if (mas[i]!=0){
            t = i;
            break;}}
    for (int i = 49; i>=0; i--){
        if (i<=t){
            count+=1;
            if (mas[i] == digit){
                return count;}}}
    count+=1;
    m = m*1000000000000;
    s = m;
    total = 0;
    while (s>0){
        arr[total] = s%10;
        s = s/10;
        total+=1;}
    for (int i = 49; i>=0; i--){
        if (arr[i]!=0){
            t = i;
            break;}}
    for (int i = 49; i>=0; i--){
        if (i<=t){
            count+=1;
            if (arr[i] == digit){
                return count;}}}
    return -1;
}
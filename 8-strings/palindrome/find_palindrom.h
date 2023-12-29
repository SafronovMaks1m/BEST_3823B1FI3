#include <math.h>
#include <string.h>

int check_is_palindrom(char mas[], int size, int i){
    int n, m;
    n = (int)mas[size]; m = (int)mas[i];
    if ((int)mas[size]>=65 && (int)mas[size]<=90){
        n+= 32;}
    if ((int)mas[i]>=65 && (int)mas[i]<=90){
        m+= 32;}
    if (i-1<=size+1){
        if (n!=m)
            return 0;
        return 1;}
    if (n!=m){
        return 0;}
    return check_is_palindrom(mas, size+1, i-1);}

int is_palindrom(char text[]){
    if (text[0] == '\0')
        return 1;
    int total = 0;
    char mas[100] = {0}, sym; int s = 0;
    for(int i = 0; text[i]!='\0'; i++){
        if (text[i]!=' '){
            mas[total] = text[i]; total+=1;}
        if (text[i]!=' ' && text[i+1] == ' ' && text[i-1] == ' ')
            return 1;
        else if (text[i] == ' '){
            if (check_is_palindrom(mas, 0, total-1) == 1)
                return 1;
            total = 0; char mas[100] = {0};}}
    return 0;}

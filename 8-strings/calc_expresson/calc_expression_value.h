#include <math.h>
#include <string.h>
#include <stdio.h>

int count(int i, char mas[]){
    int total = 0;
    while (mas[i]!='-' && mas[i]!='+' && mas[i]!='\0'){
        total = total*10+(mas[i]-48); i++;}
    return total;
} 

int calculate_expression(char expression[]){
    int summa = 0;
    if (expression[0]!='-' && expression[0]!='+'){
        summa+= count(0, expression);}
    for (int i = 0; expression[i]!='\0'; i++){
        if ((expression[i] == '-' && expression[i+1] == '+') || (expression[i] == '+' && expression[i+1] == '-'))
            return -1;
        if (expression[i] == '-'){
            summa+= -(count(i+1, expression));}
        else if (expression[i] == '+'){
            summa+= count(i+1, expression);}
    }
    return summa;
}
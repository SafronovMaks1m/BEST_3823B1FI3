#include <math.h> 
#include <stdio.h>
int find_elem(int left, int right, int number, int max_iter){ 
    int i = 1, count = 0, m = right-left+1;//Счётчик итераций
    long long mas[100000] = {0};
    int mid = 0, x;
    for (int j = left; j<=m-1; j++){
        mas[count] = j; count+=1;}
    int low = 0, hight = m-1;
    while (1){
        mid = (low+hight)/2;
        x = mas[mid];
        if (x == number){
            return i*mid;}
        else if(x>number){
            hight = mid-1; i+=1;}
        else{
            low = mid+1; i+=1;}
        
    }
}
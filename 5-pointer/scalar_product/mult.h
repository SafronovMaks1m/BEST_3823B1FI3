#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    long a = 0, b = 0, sum = 0;
    double t, c;
    for(int i = 0; i<size; i++){
        sum+= vec1[i]*vec2[i];
        a+= vec1[i]*vec1[i];
        b+= vec2[i]*vec2[i];}
    c = sqrt(a*b);
    t = acos((double)sum/(double)c);
    return (int)((t/3.1415926535)*180);
}

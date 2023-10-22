#include <stdlib.h>
#include <stdio.h>
#include <math.h>

unsigned char max_byte(unsigned short number) {
    unsigned short x, y;
    int s[16] = {0}, total = 0;
    while (number>0){
        s[total] = number%2;
        number = number/2;
        total+=1;
    }
    x = s[15]*pow(2, 7)+s[14]*pow(2, 6)+s[13]*pow(2, 5)+s[12]*pow(2, 4)+s[11]*pow(2, 3)+s[10]*pow(2, 2)+s[9]*pow(2, 1)+s[8]*1;
    y = s[7]*pow(2, 7)+s[6]*pow(2, 6)+s[5]*pow(2, 5)+s[4]*pow(2, 4)+s[3]*pow(2, 3)+s[2]*pow(2, 2)+s[1]*pow(2, 1)+s[0]*1;
    if (x>y){
        return x;}
    return y;
}

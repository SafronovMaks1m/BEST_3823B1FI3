#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int calcsize(void* memory){
    int* b = memory;
    int total = 0, i = 0;
    for (i; b[i]!=47 || b[i]!=(char)47; i++){
        total+=1;
    }
    return (total+1)*sizeof(b[i]);
}

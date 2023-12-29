#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int calcsize(void* memory){
   char* b = memory; int a = 0, i = 0;
   while (b[i]!=47){
      if (b[i] == 11){
         a = i;} i++;
   }
   return (i/(i-a)+1)*(i-a);
}
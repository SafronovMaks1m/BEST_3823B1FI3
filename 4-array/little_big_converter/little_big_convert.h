#include <math.h>

unsigned int little_big_convert(unsigned int input){
    int littleEndian = ((input>>24)&0x000000ff) +
                   ((input<<8)&0x00ff0000) +
                   ((input>>8)&0x0000ff00) + 
                   ((input<<24)&0xff000000);
    return littleEndian;
    
}
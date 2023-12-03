#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    if (size > 8) {
        return 0;}
    unsigned long long packed_value = 0;
    for (int i = 0; i < size; i++) {
        packed_value = packed_value + ((unsigned long long)arr[i] << (8 * i));}
    return packed_value;}

unsigned char unpack_ull(unsigned long long input){
    unsigned char unpacked_byte = (input >> 32);
    return unpacked_byte;}
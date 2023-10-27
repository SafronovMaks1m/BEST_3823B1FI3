#include <stdbool.h>


bool is_digit(char x) {
    if (x >= 48 && x <= 57){
    return true;}
    return false; 
}

bool is_letter(char x) {
    if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122)){
    return true;}
    return false; 
}

bool is_punctuation(char x) {
    if ((x >= 33 && x <= 47) || (x >= 58 && x <= 64) || (x >= 91 && x <= 96) || (x >= 123 && x <= 126)){
    return true;}
    return false; 
}

int get_ascii_code(char first, char second, char third) {
    int num; 
    num = (first * 1000000) + (second * 1000) + third;
    return num; 
}
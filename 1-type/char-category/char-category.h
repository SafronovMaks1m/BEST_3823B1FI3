#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

bool is_digit(char x) {
    int i;
    for (int i = 48; i<58; i++){
        if (putchar(i) == x){
            return true;}}}

bool is_letter(char x) {
    int i;
    for (int i = 65; i<91; i++){
        if (putchar(i) == x){
            return 1;}}
    for (int i = 97; i<123; i++){ 
        if (putchar(i) == x){
            return 1;}}}

bool is_punctuation(char x) {
    int i;
    for (int i = 0; i<48; i++){
        if (putchar(i) == x){
            return 1;}}
    for (int i = 58; i<65; i++){
        if (putchar(i) == x){
            return 1;}}
    for (int i = 91; i<97; i++){
        if (putchar(i) == x){
            return 1;}}
    for (int i = 123; i<128; i++){
        if (putchar(i) == x){
            return 1;}}}


int get_ascii_code(char first, char second, char third) {
    int num, i, j;
    int chisla[3] = {0, 0, 0};
    char mas[3] = {first, second, third};
    for (j = 0; j<3; j++){
        for (int i = 0; i<128; i++){
            if (putchar(i) == mas[j]){
                chisla[j] = i;
                break;}}
    for (i = 0; i<3; i++){
        if (i == 0){
            num = chisla[i];}
        else if (i>10){
            num = num*1000+chisla[i];}}
    return num;}}

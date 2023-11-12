char left_more(double input[], unsigned int size){
    int total = 0;
    for (int i = 1; i<size; i++){
        if (input[i]>input[i-1]){
            total+=1;}}
    return total;
}
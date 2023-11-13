int maxmin(int input[], int size){
    int max = -10000;
    
    for (int i = 0; i<size; i++){
        if (i == 0){
            if (input[i+1]>input[i]){
                if (input[i]>max){
                max = input[i]; continue;}}}
        if (i == size-1){
            if (input[i-1]>input[i]){
                if (input[i]>max){
                max = input[i]; continue;}}}
        if (input[i-1]>input[i] && input[i+1]>input[i]){
            if (input[i]>max){
                max = input[i];
            }
        }
    }
    return max;
}
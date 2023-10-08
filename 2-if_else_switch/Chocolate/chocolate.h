int chocolate(int n, int m, int k){
    if (k<=(m*n) && m>=0 && n>=0 && (k%n == 0 || k%m == 0)){
        return 1;}
    return 0;}
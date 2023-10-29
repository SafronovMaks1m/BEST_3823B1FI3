long fib(int m){
    int s = 0;
    int f(m){
        if (m == 0){
            return 0;}
        if (m == 1){
            return 1;}
        if (m > 2){
            return F(m-2) + F(m-1);}}
    s = f(m);
    return s;
}
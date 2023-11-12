long fib(int m){
    int sum, prom, f0 = 0, f1 = 1;
    if (m>=0){
    while (prom!=m){
        prom = f0+f1;
        sum+=prom;
        f1 = f0;
        f0 = prom;} return sum;}
    return -1;
}
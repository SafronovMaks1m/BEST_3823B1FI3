long fib(int m){
    int prom = 0, f0 = 0, f1 = 1;
    long long sum = 0;
    if (m>=0){
    while (prom<=m){
        prom = f0+f1;
        sum+=prom;
        f1 = f0;
        f0 = prom;}
    return sum-prom;}
    return -1;
}
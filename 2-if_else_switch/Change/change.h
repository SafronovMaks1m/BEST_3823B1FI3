long long change(int a, int b, int c, int d){
    long  h;
    h = ((long long)c*100+(long long)d) - ((long long)a*100+ (long long)b);
    if (h>=0){
        return h;}
    return -1;}
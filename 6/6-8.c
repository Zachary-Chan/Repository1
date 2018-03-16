double P( int n, double x ){
    if(!n){
        return 1;
    }
    if(n == 1){
        return x;
    }

    double a = (2 * n - 1) * P(n - 1, x);
    double b = (n - 1) * P(n - 2, x);
    return (a - b) / n;
}

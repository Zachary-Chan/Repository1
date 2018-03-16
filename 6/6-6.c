int gcd( int x, int y ){
    for(int i = x; i >= 1; i--){
        if( !(x % i) && !(y % i) ){
            return i;
        }
    }
}

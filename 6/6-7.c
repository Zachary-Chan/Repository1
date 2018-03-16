void swap(char* a, int n, int m){
    char ch = a[n];
    a[n] = a[m];
    a[m] = ch;
}

void f( char *p ){
    int length = 0;
    while( *(p + length) ){
        length++;
    }

    for(int i = 0, j = length - 1; i < j; i++, j--){
        swap(p, i, j);
    }
}

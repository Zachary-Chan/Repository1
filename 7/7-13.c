#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long long n){
    if(n == 1){
      return false;
    }
    for(long long i = 2; i <= (long long)sqrt(n); i++){
        if( !(n % i) ){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    scanf("%d", &N);

    long long a[10];
    for(int i = 0; i < N; i++){
        scanf("%lld", a + i);
    }

    for(int i = 0; i < N; i++){
            puts("Yes");
        }else{
            puts("No");
        }
    }
}

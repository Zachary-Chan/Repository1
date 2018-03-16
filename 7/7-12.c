#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if( !(n % i) ){
            return false;
        }
    }
    return true;
}

int main(){
    int n, k;
    scanf("%d%d", &n, &k);

    int a[10];
    int count = 0;
    //1不是素数
    bool flag = false;
    int j = 0;
    for(int i = n; i > 1; i--){
        if(isPrime(i)){
            a[j++] = i;
            count += i;

            if(j == k){
                flag = true;
                break;
            }
        }
    }

    int i;
    if(!flag){
        k = j;
    }
    for(i = 0; i < k - 1; i++){
        printf("%d+", a[i]);
    }
    printf("%d=%d\n", a[i], count);
}

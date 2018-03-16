#include <stdio.h>

int main(){
    int M, N;
    scanf("%d%d", &M, &N);

    for(int i = M; i >= 1; i--){
        if( !(M % i) && !(N % i) ){
            printf("%d ", i);
            break;
        }
    }

    for(int i = M; ; i++){
        if(!(i % M) && !(i % N)){
            printf("%d\n", i);
            break;
        }
    }
}

#include <stdio.h>

int main(){
    int N, M;
    scanf("%d%d", &N, &M);
    M %= N;

    int a[200];
    for(int i = 0; i < N; i++){
        scanf("%d", a + i);
    }

    for(int i = N - M, j = 100; i <= N - 1; i++, j++){
        a[j] = a[i];
    }

    for(int i = N - M - 1; i >= 0; i--){
        a[i + M] = a[i];
    }

    for(int i = N - M, j = 0, z = 100; i <= N - 1; i++, j++, z++){
        a[j] = a[z];
    }

    for(int i = 0; i < N; i++){
        printf("%d%c", a[i], i == N - 1 ? '\n' : ' ');
    }
}

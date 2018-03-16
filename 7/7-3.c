#include <stdio.h>

int a[6][6];
int b[6][6];
int m, n;

void change(int col_a, int col_b){
    for(int i = 0; i < n; i++){
        b[i][col_b] = a[i][col_a];
    }
}

int main(){
    scanf("%d%d", &m, &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int col = 0; col < n; col++){
        int col_new = (col + m) % n;
        change(col, col_new);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", b[i][j]);
        }
        puts("");
    }
}

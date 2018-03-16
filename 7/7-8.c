#include <stdio.h>
#include <math.h>

int main(){
    int a[4][8];
    int number[4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 8; j++){
            a[i][j] = getchar() - '0';
        }
    }

    for(int i = 0; i < 4; i++){
        int count = 0;
        for(int j = 0; j < 8; j++){
            count += a[i][j] * (int)pow(2, 7 - j);
        }

        number[i] = count;
    }

    int i;
    for(i = 0; i < 3; i++){
        printf("%d.", number[i]);
    }
    printf("%d\n", number[i]);
}

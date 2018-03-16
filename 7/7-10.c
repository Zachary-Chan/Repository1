#include <stdio.h>
#include <stdbool.h>

int main(){
    int N, U, D;
    scanf("%d%d%d", &N, &U, &D);

    int height = 0;
    int time = 0;

    while(true){
        time++;
        height += U;

        if(height >= N){
            break;
        }

        time++;
        height -= D;
    }

    printf("%d\n", time);
}

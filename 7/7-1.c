#include <stdio.h>
#include <math.h>

int main(){
    int N;
    scanf("%d", &N);

    //代表n的7次幂
    int seventh[10] = {0, 1, (int)pow(2, 7), (int)pow(3, 7), (int)pow(4, 7),
                (int)pow(5, 7), (int)pow(6, 7), (int)pow(7, 7),
                (int)pow(8, 7), (int)pow(9, 7)};

    //遍历数字
    int limit = (int)pow(10, N);
    for(int number = (int)pow(10, N - 1); number < limit; number++){
        char a[8];
        sprintf(a, "%d", number);

        int count = 0;
        for(int i = 0; i < N; i++){
            int temp = a[i] - '0';
            if(N == 7){
                count += seventh[temp];
            }else{
                count += (int)pow(temp, N);
            }
        }

        if(count == number){
            puts(a);
        }
    }
}

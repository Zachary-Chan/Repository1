#include <stdio.h>
#include <stdbool.h>

char a[100][19];

int changeDigit(char ch){
    return ch - '0';
}

bool isCorrect(int n, int i){
    if(n >= 3 && n <= 10){
        if(n + changeDigit(a[i][17]) == 12){
            return true;
        }
    }else if(n == 0 || n == 1){
        if(n + changeDigit(a[i][17]) == 1){
            return true;
        }
    }else{
        if(a[i][17] == 'X'){
            return true;
        }
    }

    return false;
}

int main(){
    int N;

    int weight[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%s", a[i]);
    }

    bool flag = false;
    for(int i = 0; i < N; i++){
        int count = 0;
        for(int j = 0; j < 17; j++){
            int digit = changeDigit(a[i][j]);

            if(digit < 0 || digit > 9){
                flag = true;
                puts(a[i]);
                goto end;
            }

            count += digit * weight[j];
        }

        count %= 11;
        if(!isCorrect(count, i)){
            flag = true;
            puts(a[i]);
        }

end:
        continue;
    }

    if(!flag){
        puts("All passed");
    }
}

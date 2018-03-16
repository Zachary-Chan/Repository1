#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void swap(int* a, int n, int m){
    int temp = a[n];
    a[n] = a[m];
    a[m] = temp;
}

int main(){
    int number[4];

    char ch;
    int i = 0;
    while( isdigit(ch = getchar()) ){
        number[i++] = ch - '0'; //转换为整型
    }

    for(int j = 0; j < 4; j++){
        number[j] = (number[j] + 9) % 10;
    }

    swap(number, 0, 2);
    swap(number, 1, 3);

    printf("The encrypted number is ");
    for(int j = 0; j < 4; j++){
        printf("%d", number[j]);
    }
}

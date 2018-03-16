#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[5][80];

    for(int i = 0; i < 5; i++){
        scanf("%s", a[i]);
    }

    qsort(a, 5, sizeof(char) * 80, strcmp);

    puts("After sorted:");
    for(int i = 0; i < 5; i++){
        puts(a[i]);
    }
}

#include <stdio.h>

int main(){
    int a[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", a + i);
    }

    int weight = a[0];
    int index = 0;
    for(int i = 1; i < 3; i++){
        if(weight == a[i]){
            index = 3 - i;
            break;
        }
    }

    printf("%c\n", 'A' + index);
}

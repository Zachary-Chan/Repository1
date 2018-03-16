#include <stdio.h>

int main(){
    int up, down;
    scanf("%d/%d", &up, &down);

    for(int i = up; i >= 1; i--){
        if( !(up % i) && !(down % i) ){
            up /= i;
            down /= i;
        }
    }

    printf("%d/%d\n", up, down);
}

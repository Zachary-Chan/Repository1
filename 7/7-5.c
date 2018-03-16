#include <stdio.h>

int main(){
    int h, m, s;
    int n;

    scanf("%d:%d:%d", &h, &m, &s);
    scanf("%d", &n);

    s += n;
    int flag = s / 60;
    s %= 60;

    if(flag){
        m++;

        flag = m / 60;
        m %= 60;

        if(flag){
            h++;

            h %= 24;
        }
    }

    printf("%02d:%02d:%02d\n", h, m, s);
}

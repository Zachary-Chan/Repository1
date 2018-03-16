#include <stdbool.h>
#include <stdlib.h>

int reverse( int number ){
    if(!number){
        return 0;
    }

    bool isNegativeNumber = false;
    if(number < 0){
        isNegativeNumber = true;
    }

    number = abs(number);

    char a[100];
    sprintf(a, "%d", number);
    char final[100];

    //初始化final
    for(int i = 0; i < 99; i++){
        final[i] = '0';
    }
    final[99] = 0;

    for(int i = 0, j = 98; a[i]; i++, j--){
        final[j] = a[i];
    }

    int ret_val = atoi(final);

    if(isNegativeNumber){
        return -ret_val;
    }
    return ret_val;
}

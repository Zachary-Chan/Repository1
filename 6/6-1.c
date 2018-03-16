#include <stdlib.h>

int compare(const void* a, const void* b){
    const ElementType* p1 = a;
    const ElementType* p2 = b;

    if(*p1 > *p2){
        return 1;
    }else if(*p1 == *p2){
        return 0;
    }else{
        return -1;
    }
}

ElementType Median( ElementType A[], int N ){
    qsort(A, N, sizeof(ElementType), compare);

    return A[N / 2];
}

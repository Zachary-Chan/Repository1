#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[11];
    int birthDate;
    char number[18];
};

int compare(const void* a, const void* b){
    const struct Person* p1 = a;
    const struct Person* p2 = b;

    if(p1->birthDate > p2->birthDate){
        return 1;
    }else if(p1->birthDate == p2->birthDate){
        return 0;
    }else{
        return -1;
    }
}

void printInfo(const struct Person* p){
    printf("%s %d %s\n", p->name, p->birthDate, p->number);
}

int main(){
    struct Person a[10];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s%d%s", a[i].name, &a[i].birthDate, a[i].number);
    }

    qsort(a, n, sizeof(struct Person), compare);

    for(int i = 0; i < n; i++){
        printInfo(a + i);
    }
}

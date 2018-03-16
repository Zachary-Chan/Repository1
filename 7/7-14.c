#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    int gender;
    char name[9];
    bool isOk;
}Student;

int main(){
    int N;
    scanf("%d", &N);

    Student stu[50];
    for(int i = 0; i < N; i++){
        scanf("%d%s", &stu[i].gender, stu[i].name);
        stu[i].isOk = true;
    }

    char pair[25][2][9];
    int count = 0;
    for(int i = 0; i <= N / 2 - 1; i++){
        for(int j = N - 1; j >= N / 2; j--){
            if( (stu[i].gender + stu[j].gender == 1) && (stu[j].isOk) &&
                    (stu[i].isOk) ){
                strcpy(pair[count][0], stu[i].name);
                strcpy(pair[count][1], stu[j].name);
                count++;

                stu[j].isOk = false;
                stu[i].isOk = false;
            }
        }
    }

    for(int i = 0; i < count; i++){
        printf("%s %s\n", pair[i][0], pair[i][1]);
    }
}

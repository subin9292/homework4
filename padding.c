#include <stdio.h>

// 구조체 크기 총 19 bytes
struct student {
    char lastName[13]; // 13bytes
    int studentId; // 4bytes
    short grade; // 2bytes
};

int main(){

    printf("[----- [강수빈]  [2023078011] -----]\n\n");

    struct student pst; // 구조체 변수 선언

    printf("size of student = %ld\n", sizeof(struct student)); // student 구조체 크기 출력
    printf("size of int     = %ld\n", sizeof(int)); // 정수형 크기 출력
    printf("size of short   = %ld\n", sizeof(short)); // short형 크기 출력

    return 0;

}
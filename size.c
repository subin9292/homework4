#include <stdio.h>
#include <stdlib.h>

void main(){
    int **x;  // 이중 포인터 선언


    printf("[----- [강수빈]  [2023078011] -----]\n\n");

    printf("sizeof(x) = %lu\n", sizeof(x));  // 'x'의 크기 출력, 시스템의 포인터 크기 출력하게됨.
    printf("sizeof(*x) = %lu\n", sizeof(*x));  // '*x'의 크기 출력, 이 역시 포인터 크기이다.
    printf("sizeof(**x) = %lu\n", sizeof(**x));  // '**x'는 실제로 가리키고 있는 곳의 정수값이므로 int의 크기인 4bytes이다.
}
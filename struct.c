#include <stdio.h>

// student1 구조체 선언
struct student1{
    char lastName;
    int studentId;
    char grade;
};

 // typedef를 이용한 student2 구조체 선언. 앞으로 구조체 변수를 선언할 때 'struct'키워드를 생략할 수 있다.
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main(){


    printf("[----- [강수빈]  [2023078011] -----]\n\n");

    struct student1 st1 = {'A', 100, 'A'}; // student1 구조체 변수 선언 및 초기화

// 구조체 변수 st1 값 출력
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'}; // student2 구조체 변수 선언 및 초기화

// 구조체 변수 st2값 출력
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studendId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;  // student2 구조체 변수 선언

    st3 = st2;  // st2의 값을 st3으로 복사한다.

// 구조체 변수 st3값 출력
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */
    // st3의 값과 st2의 값이 같은 지 필드 안에 있는 것들을 각각 비교
    if(st3.lastName == st2.lastName && st3.studentId==st2.studentId && st3.grade == st2.grade)
        printf("equal\n");
    else
        printf("not equal\n");

    return 0;

}
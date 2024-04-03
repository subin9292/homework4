#include <stdio.h>

// student1 ����ü ����
struct student1{
    char lastName;
    int studentId;
    char grade;
};

 // typedef�� �̿��� student2 ����ü ����. ������ ����ü ������ ������ �� 'struct'Ű���带 ������ �� �ִ�.
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main(){


    printf("[----- [������]  [2023078011] -----]\n\n");

    struct student1 st1 = {'A', 100, 'A'}; // student1 ����ü ���� ���� �� �ʱ�ȭ

// ����ü ���� st1 �� ���
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'}; // student2 ����ü ���� ���� �� �ʱ�ȭ

// ����ü ���� st2�� ���
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studendId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;  // student2 ����ü ���� ����

    st3 = st2;  // st2�� ���� st3���� �����Ѵ�.

// ����ü ���� st3�� ���
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */
    // st3�� ���� st2�� ���� ���� �� �ʵ� �ȿ� �ִ� �͵��� ���� ��
    if(st3.lastName == st2.lastName && st3.studentId==st2.studentId && st3.grade == st2.grade)
        printf("equal\n");
    else
        printf("not equal\n");

    return 0;

}
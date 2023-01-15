#include <stdio.h>
struct mark
{
    int math;
    int eng;
};

struct stud
{
    int roll;
    struct mark a;
}s1;

int main()
{
    struct stud s1={5, 65, 78};

    printf("Marks of student 1 in english are %d\n", s1.a.math);

    return 0;
}
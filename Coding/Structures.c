#include <stdio.h>
struct student
{
    int roll;
    int marks;

} A, B, C;

int main()
{
    struct student A = {1, 23}, B = {2, 45}, C = {3, 75};
    printf("Marks of A are %d\n", A.marks);
    printf("Marks of B are %d\n", B.marks);
    printf("Marks of C are %d\n", C.marks);

    return 0;
}

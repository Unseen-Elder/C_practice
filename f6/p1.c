#include<stdio.h>
int main()
{
    int marks[4];

    marks[0]=44; // index starts from zero in c language;
    marks[1]=48;
    marks[2]=35;
    marks[3]=41;

    printf("Marks of student 1 : %d\n",marks[0]);
    printf("Marks of student 2 : %d\n",marks[1]);
    printf("Marks of student 3 : %d\n",marks[2]);
    printf("Marks of student 4 : %d\n",marks[3]);

    return 0;
}
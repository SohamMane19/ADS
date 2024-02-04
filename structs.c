#include<stdio.h>
#include<string.h>
struct mystruct
{
    int rollno;
    char name[20];
};
int main()
{
    struct mystruct student1;
    student1.rollno=12;
    strcpy(student1.name,"soham mane");
    struct mystruct student2={7,"siuuuuu"};
    printf("Roll number:%d\nName:%s\n",student2.rollno,student2.name);

    printf("Roll number:%d\nName:%s\n",student1.rollno,student1.name);
    return 0;
}
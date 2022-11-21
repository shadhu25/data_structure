#include<stdio.h>
struct student
{
    char name[50];
    int age;
    int roll_no;
    int marks;
};
    void print(char* name[50], int* age, int* roll_no, int* marks)
    {
        scanf("%s %d %d %d",name,age,roll_no,marks);
    }
int main()
{
    struct student s1;//={"krishn kant kumar",21,2100009556,100};
    print(&s1.name,&s1.age,&s1.roll_no,&s1.marks);
    printf("%s %d %d %d\n",s1.name,s1.age,s1.roll_no,s1.marks);
return 0;
}
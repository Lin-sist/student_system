#include <stdio.h>
#define N 3
struct student
    {
        char name[30];
        char sex[10];
        char major[50];
        int age;
        int id;
    };

void input(struct student stu[N])
{
    int i;
    for (i = 0; i < N; i++)
    {
        getchar();//清除缓存区的换行符；
        
        //输入学生信息；
        printf("请输入学生%d的姓名: ", i + 1);
        scanf("%s", stu[i].name);
        
        printf("请输入学生%d的性别: ", i + 1);
        scanf("%s", stu[i].sex);

        printf("请输入学生%d的专业: ", i + 1);
        scanf("%s", stu[i].major);

        printf("请输入学生%d的年龄: ", i + 1);
        scanf("%d", &stu[i].age);

        printf("请输入学生%d的学号: ", i + 1);
        scanf("%d", &stu[i].id);
    }
}

int main ()
{
    struct student stu[N];
    input(stu);

    return 0;
}
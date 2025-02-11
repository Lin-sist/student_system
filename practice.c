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

// 通用输入函数
void inputField(char *field, const char *prompt) {
    printf("%s", prompt);
    scanf("%s", field);  // 输入字符串
}

// 输入学生信息的函数
void input(struct student stu[N]) {
    int i;
    for (i = 0; i < N; i++) {
        // 清除缓冲区的换行符
        getchar();

        // 输入学生信息
        inputField(stu[i].name, "请输入学生姓名: ");
        inputField(stu[i].sex, "请输入学生性别: ");
        inputField(stu[i].major, "请输入学生专业: ");
        
        printf("请输入学生年龄: ");
        scanf("%d", &stu[i].age);

        printf("请输入学生学号: ");
        scanf("%d", &stu[i].id);
    }
}

int main ()
{
    struct student stu[N];
    input(stu);

    return 0;
}
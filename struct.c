#include <stdio.h>
#include <conio.h>
#include <string.h>
struct employee
{
    int emp_id;
    char emp_name[1000];
    float emp_salary;
};
void main()
{
    struct employee emp[3];
    struct employee highest;
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter emp id,emp name and salary %d :", i + 1);
        scanf("%d %s %f", &emp[i].emp_id, &emp[i].emp_name, &emp[i].emp_salary);
    }
    highest.emp_salary = 0;
    for (i = 0; i < 3; i++)
    {
        if (highest.emp_salary < emp[i].emp_salary)
        {
            strcpy(highest.emp_name, emp[i].emp_name);
            highest.emp_id = emp[i].emp_id;
            highest.emp_salary = emp[i].emp_salary;
        }
    }
    printf("%d %s %f", highest.emp_id, highest.emp_name, highest.emp_salary);
    getch();
}
// #include <stdio.h>
// #include <conio.h>
// #include <string.h>
// struct employee
// {
//     int emp_id;
//     char emp_name[1000];
//     float emp_salary;
// };
// void main()
// {
//     struct employee emp[3];
//     struct employee highest;
//     int i;
//     for (i = 0; i < 3; i++)
//     {
//         printf("Enter emp id,emp name and salary %d :", i + 1);
//         scanf("%d %s %f", &emp[i].emp_id, &emp[i].emp_name, &emp[i].emp_salary);
//     }
//     highest.emp_salary = 0;
//     for (i = 0; i < 3; i++)
//     {
//         if (highest.emp_salary < emp[i].emp_salary)
//         {
//             strcpy(highest.emp_name, emp[i].emp_name);
//             highest.emp_id = emp[i].emp_id;
//             highest.emp_salary = emp[i].emp_salary;
//         }
//     }
//     printf("%d %s %f", highest.emp_id, highest.emp_name, highest.emp_salary);
//     getch();
// }

// function= function is a process of doing a task / any task through small modules, by
// breaking a project/ dividing a project. for example: calculator
// simple logic add, sub , div, mul
// one person = add
// another person = div
// another person =mul
// advantages: time maintain, less time effective work, finished a project in  a time
// debuging bug=errors find out simple and to debug.

// working with functiom
#include <stdio.h>
#include <conio.h>
// declaration a function
int sum(int, int);
int mul(int, int);
int div(int, int);

void main()
{
    int num1, num2, add, pro, divide;
    printf("Enter two digits :");
    scanf("%d %d", &num1, &num2);
    add = sum(num1, num2); // calling a function.
    pro = mul(num1, num2);
    divide = div(num1, num2);
    printf("sum of two numbers is %d\n", add);
    printf("Multiply of to numbers is %d \n", pro);
    printf("Division of two digits is %d\n", divide);

    getch();
}

// defining a function

// calculation of sum
int sum(int num1, int num2)
{
    int add;
    add = num1 + num2;
    return add;
}

// calculation of multiply
int mul(int num1, int num2)
{
    int product;
    product = num1 * num2;
    return product;
}
int div(int num1, int num2)
{
    int divide;
    divide = num1 / num2;
    return divide;
}

// specifier
// integer = %d
// character =%c
// string = %s
// float =%f
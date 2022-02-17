// // fabonacci series
// #include <stdio.h>
// int main()
// {
//     int a = 0, b = 1, c, i, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         c = a + b;
//         printf("%d\t", a);
//         a = b;
//         b = c;
//     }
//     return 0;
// }

// fabonacci series using recursive function.
// #include <stdio.h>
// int fab(int); // decleration of function
// int main()
// {
//     int n, fabo, a;
//     printf("Enter how many number :");
//     scanf("%d", &n);
//     fabo = fab(n); // calling a
//     printf("%d\t", fabo);
//     return 0;
// }
// int fab(int n)
// {
//     if (n == 1)
//     {
//         return (0);
//     }
//     else if (n == 2)
//     {
//         return (1);
//     }
//     else
//     {
//         return (fab(n - 1) + fab(n - 2));
//     }
// }

// C program using user defined function to calculate x raise to power y
#include <stdio.h>
int power(int, int);
int main()
{
    int x, y, p;
    printf("Enter a value of base x :");
    scanf("%d", &x);
    printf("\nEnter a value of power y:");
    scanf("%d", &y);
    // calculation
    p = power(x, y);
    printf("x raise to the power y : %d", p);
    return 0;
}
int power(int x, int y)
{
    int i;
    int p = 1;
    for (i = 1; i <= y; i++)
    {
        p = p * x;
    }
    return p;
}
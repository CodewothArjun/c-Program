#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char name[40];
    int len;

    printf("Enter your name : ");
    // gets(name);
    scanf("%s", &name);

    printf("Enter a value of n : ");
    scanf("%d", &n);

    len = strlen(name);

    // upper part
    for (i = n / 2; i <= n; i += 2)
    {
        for (j = 1; j < n - i; j += 2)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // lower part
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        // for name
        if (i == n)
        {
            for (j = 1; j <= (n * 2 - len) / 2; j++)
            {
                printf("*");
            }
            printf("%s", name);
            for (j = 1; j < (n * 2 - len) / 2; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = 1; j <= (i * 2) - 1; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
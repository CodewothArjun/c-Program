#include <stdio.h>
int main()
{
    int i, j, k;
    char a = '*';

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", a);
            }
            printf("\n");
        }
        printf("\n");
    }
}
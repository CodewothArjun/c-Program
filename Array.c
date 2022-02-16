// // A c program to ask ten numbers from the user and display them using array.
// #include <stdio.h>
// int main()
// {
//     int i, num[10];

//     // using array
//     for (i = 0; i < 10; i++)
//     {
//         printf("Enter a number %d :", i + 1);
//         scanf("%d", &num[i]);
//     }

//     // displaying the result
//     printf("The number you have entered are: \n");
//     for (i = 0; i < 10; i++)
//     {
//         printf("\n%d", num[i]);
//     }
//     return 0;
// }

// WAP in C to ask any 10 numbers from the user. And sort them in asending order and display them.
#include <stdio.h>
int main()
{
    int i, num[10], j, temp;
    // Taking an input from the user
    for (i = 0; i < 10; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
    }

    //    calculation or processing
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {

            if (num[j] < num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("The sorted number in ascending order are : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}
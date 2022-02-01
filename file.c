#include <stdio.h>
int main()
{
    FILE *p;
    p = fopen("Arjun.txt", "w");
    char name[30];
    int age, roll, i, n;
    printf("Enter a no. of student: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        printf("Enter a name and roll no. and age: ");
        scanf("%s %d %d", &name, &roll, &age);
        fprintf(p, "%s\t %d\t %d\n", name, roll, age);
        printf("%s\t %d\t %d\n", name, roll, age);
    }
    fclose(p);
    return 0;
}
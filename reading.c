#include <stdio.h>
int main()
{

    // reading mode
    FILE *f;
    f = fopen("Arjun.txt", "r");
    char name[30];
    int roll, age;
    printf("Name\t roll\t age\n");
    while (fscanf(f, "%s %d %d", &name, &roll, &age) != EOF)
    {
        printf("%s\t %d\t %d\n", name, roll, age);
    }
    fclose(f);
    return 0;
}

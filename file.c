#include <stdio.h>
int main()
{
    FILE *p;
    p = fopen("Arjun.txt", "w");
    char name[30];
    int roll;
    printf("Enter a name and roll no.");
    scanf("%s %d", &name, &roll);
    fprintf(p, "%s\t %d\n", name, roll);
    printf("%s\t %d\n", name, roll);
    fclose(p);
    return 0;
}
#include <stdio.h>
#include <conio.h>
// #include <string.h>
void main()
{
    char str[] = "\n\n\t\t\t------------- Welcome To Update Information page! -------------\n\t\t";
    char email, temp;
    int width = 100;
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("\n");
    char na[90], va[90], em[90];
    printf("\n\t\t please! Enter Your Email Address To Update Informaton \n\t\t");
    scanf("%s", &email);
    FILE *fptr;
    FILE *fp;
    fp = fopen("nuser.txt", "w");
    fptr = fopen("user.txt", "r");
    while (fscanf(fptr, "%s %s %s", &na, &va, &em) != EOF)
    {
        if (strcmp(email, em) != 0)
        {
            fprintf(fp, "%s \t %s \t %s \n\n ", na, va, em);
        }
        else
        {
            temp = email;
        }
    }
    fclose(fp);
    fclose(fptr);
}

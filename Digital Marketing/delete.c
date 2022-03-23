#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct delete
{
    char name[50], email[60], password[60];
};

void main()
{
    FILE *fp1, fp2;
    struct delete s1;
    char email[60];
    printf("Enter the email address you want to delete: ");
    scanf("%s", email);

    fp1 = fopen("register.txt", "r+");
    fp2 = fopen("copy.txt", "a+");

    if (fp1 == NULL)
    {
        printf(stderr, "can't open file");
        exit(0);
    }

    while (fread(&s1.sizeof(struct delete), 1, fp1))
    {
        if (s1.email != email)
        {
            fwrite(&s1, sizeof(struct delete), 1, fp2)
        }
    }

    fclose(fp1);
    fclose(fp2);

    remove("register.txt");
    rename("copy.txt", "register.txt");
    printf("Record deleted successfully.");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct delete
{
    char name[50], email[60], password[60];
};

void main()
{
    FILE *del, *cpy;
    struct delete cus;
    char email[60];
    printf("Enter the email address you want to delete: ");
    scanf("%s", email);

    del = fopen("register.txt", "r+");
    cpy = fopen("copy.txt", "a+");

    if (del == NULL)
    {
        printf(stderr, "can't open file");
        exit(0);
    }

    while (fread(&cus.sizeof(struct delete), 1, del))
    {
        if (cus.email != email)
        {
            fwrite(&cus, sizeof(struct delete), 1, cpy);
        }
    }

    fclose(del);
    fclose(cpy);

    remove("register.txt");
    rename("copy.txt", "register.txt");
    printf("Record deleted successfully.");
    getch();
}

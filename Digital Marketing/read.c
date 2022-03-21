#include <stdio.h>
#include <conio.h>
void main()
{

    // declearing the types of data
    char f_name[50], l_name[50], password[50], email[30];
    // file and mode
    FILE *read;
    read = fopen("register.txt", "r");

    // Printing the output

    while (fscanf(read, "%s %s %s %s \n", &f_name, &l_name, &email, &password) != EOF)
    {
        printf("\n\t%s\t\t\t%s\t\t\t %s\t\t\t%s",f_name,l_name,email,password);
    }
    fclose(read);
    return 0;
}
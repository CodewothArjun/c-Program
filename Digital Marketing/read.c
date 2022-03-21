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

    while (fscanf(read, "%s\t\t%s\t\t%s\t%s \n", f_name, l_name, email, password) != EOF)
    {
        printf(read, "First_Name\tLast_Name\tEmail\t\t\t\t\tPassword \n");
    }
    fclose(read);
}
#include <stdio.h>
#include <conio.h>
void main()
{

    // declearing the types of data
    char f_name[50], l_name[50], password[50], email[30];
    // file and mode
    FILE *create;
    create = fopen("register.txt", "w");
    // Taking an input from user
    printf("Enter a First Name: ");
    scanf("%s", &f_name);
    printf("Enter a Last Name: ");
    scanf("%s", &l_name);
    printf("Enter a Email: ");
    scanf("%s", &email);
    printf("Enter a Password: ");
    scanf("%s", &password);

    // Printing the output
    fprintf(create, "First_Name \t Last_Name \t Email \t\t\t\t\t\t Password \n");
    fprintf(create, "%st\t\t%s \t\t%s  \t%s \n", f_name, l_name, email, password);
    fclose(create);
}
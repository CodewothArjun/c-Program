#include <stdio.h>
#include <conio.h>
int main()
{
    // declearing the types of data
    char f_name[50], l_name[50], password[50], email[30];
    // file and mode
    FILE *update;
    update = fopen("register.txt", "a");
    // Taking an input from user
    printf("Enter a First Name: ");
    scanf("%s", &f_name);
    printf("Enter a Last Name: ");
    scanf("%s", &l_name);
    printf("Enter a Email: ");
    scanf("%s", &email);
    printf("Enter a Password: ");
    scanf("%s", &password);

    // updating the the data
    fprintf(update, "%st\t\t%s \t\t%s  \t%s \n", f_name, l_name, email, password);
    fclose(update);
    return 0;
    
}
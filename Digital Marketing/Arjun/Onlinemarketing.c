#include <stdio.h>
#include <conio.h>
#include <string.h>

void Signup(int);
void select(int);
void update(int);
void Delete(int);
void home(void);
void logout(void);
int one;
void main()
{
    home();
}
// welocme page
void home()
{
    system("cls");
    system("COLOR b0");
    char str[] = "\n\n\n \t\t\t<========================================  Welcome To Digital Marketing Record Field. ========================================> \n\n\n";
    int width = 100;
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("\n");
    printf("\n\t\t----------- Please Choose Your Operation: -----------\n\n");

    printf("\n\t\t 1)SIGN UP (Enter 1) \n");
    printf("\n\t\t 2)VIEW YOUR PROFILE (Enter 2) \n");
    printf("\n\t\t 3)UPDATE YOUR INFORMATION (Enter 3) \n");
    printf("\n\t\t 4)DELETE YOUR INFORMATION (Enter 4)\n\n\n\t\t");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        Signup(choice);
        break;
    }
    case 2:
    {
        select(choice);
        break;
    }
    case 3:
    {
        update(choice);
        break;
    }
    case 4:
    {
        Delete(choice);
        break;
    }
    default:
    {
        printf("invalid optation");
        break;
    }
    }
}

// registeration page

void Signup(int choice)
{
    system("cls");
    system("COLOR d6");
    char str[] = "\n\n\n\n\t\t\t\t\t*----------------------- Welcome to Registration page ! -----------------------*\n";
    int width = 100;
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("\n\n\t\tFor Sign Up Please Provide Your Following Information.");
    char temp, name[90], password[90], email[90], na[90], va[90], em[90];
    int count = 0, result = 0;
    printf("\n\n\t\t Enter Your Name: ");
    scanf("%c", &temp);
    scanf("%[^\n]", name);
    printf("\n\t\t Enter Your Password: ");
    scanf("%s", &password);
    printf("\n\t\t Enter Your Email Address: ");
    scanf("%s", &email);
    printf("\n\n");
    FILE *fptr;
    fptr = fopen("user.txt", "a");
    while (fscanf(fptr, "%s %s %s", &na, &va, &em) != EOF)
    {
        if (strcmp(email, em) == 0)
        {
            result++;
        }
        if (strcmp(email, em) != 0)
        {
            result = result;
        }
    }
    if (result == 0)
    {
        fprintf(fptr, "%s \t %s \t %s \n ", name, password, email);
        printf("\n\n\t\tData registered as: \n");
        printf("\n\t\tName   \t Password \t   Email \n");
        printf("\n\t\t%s \t %s \t %s \n\n ", name, password, email);
    }
    else
    {
        printf("\n\n\t\tData already registered as: \n");
        printf("\n\t\tName\t Password_Name \t Email \n");
        printf("\n\t\t%s \t %s \t %s \n\n ", name, password, email);
    }
    fclose(fptr);
    printf("\n\t\t\t\t\t\t\t\t\t------> THNAK YOU ! ------>\n");
    printf("\n\n\t\t-->>> GO HOME(Click 1) <<--\n\n\n\t\t\t");
    scanf("%d", &one);
    if (one == 1)
    {
        home();
    }
}

// select page

void select(int choice)
{
    system("cls");
    system("COLOR e0");
    char str[] = "\n\n\t\t\t-------- Welcome To Search Information page! --------\n";
    int width = 100;
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("\n");

    int id, idt, d, temp = 0;
    char email[90];
    char na[90], va[90], em[90];
    printf("\n\n\t\t Please! Enter Your Email Address To View Your Information.\n\n\t\t");
    scanf("%s", &email);
    FILE *fptr;
    fptr = fopen("user.txt", "r");
    while (fscanf(fptr, "%s %s %s", &na, &va, &em) != EOF)
    {

        if (strcmp(email, em) == 0)
        {
            printf("\n\t\t Your information: \n");
            printf("\n\t\t Name\t\tpassword_Name\t\tEmail \n");
            printf("\n\t\t %s \t\t %s \t\t %s \n\n ", na, va, em);
            temp++;
        }
    }
    if (temp == 0)
    {
        printf("\n\t\t No result found \n\n");
    }
    fclose(fptr);
    printf("\n\t\t THNAK YOU! \n\t\t");
    printf("\n\n\t\t ----->> GO HOME (Click 1) <<-----\n\n\t\t");
    scanf("%d", &one);
    if (one == 1)
    {
        home();
    }
}

// update page

void update(int choice)
{
    system("cls");
    system("COLOR a");
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
    if (strcmp(email, em) == 0)
    {
        remove("user.txt");
        rename("nuser.txt", "user.txt");
        logout();
    }
    else
    {
        printf("\n\t\t No Record found\n\n");
    }

    printf("\n\t\t THNAK YOU! \n\n");
    printf("\n\t\t GO HOME(press 1) \n\t\t");
    scanf("%d", &one);
    if (one == 1)
    {
        home();
    }
}

// logout

void logout()
{
    system("cls");
    system("COLOR c7");
    printf("\n\t\t Now, Enter your new information \n\t\t");
    char temp, name[90], password[90], email[90], na[90], va[90], em[90];
    int dose, id, count = 0, result = 0, d, idt;
    printf("\n\n\t\t Name: ");
    scanf("%c", &temp);
    scanf("%[^\n]", name);
    printf("\n\t\t Password: ");
    scanf("%s", &password);
    printf("\n\t\t Email: ");
    scanf("%s", &email);
    printf("\n\n");
    FILE *fptr;
    fptr = fopen("user.txt", "a");
    while (fscanf(fptr, "%s %s %s", &na, &va, &em) != EOF)
    {
        if (strcmp(email, em) == 0)
        {
            result++;
        }
        if (strcmp(email, em) != 0)
        {
            result = result;
        }
    }
    if (result == 0)
    {
        fprintf(fptr, "\n\t\t %s \t %s \t %s \n ", name, password, email);
        printf("\n\t\t Data updated as: \n");
        printf("\n\t\t Name \t password \t Email \n");
        printf("%s \t %s \t %s \n\n ", name, password, email);
    }
    else
    {
        printf("\n\t\t Data already Exist as: \n");
        printf("\n\t\t Name \t password \t Email \n");
        printf("%s \t %s \t %s \n\n ", name, password, email);
    }
    fclose(fptr);
}

// Delete page

void Delete(int choice)
{
    system("cls");
    char str[] = "\n\n\t\t\t\t\t------ Welcome To Delete Information page! ------\n";
    int width = 100;
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("\n");

    int idt, d;
    char Delete, temp, na[90], va[90], em[90];
    printf("\n\t\t please! Enter Your Email To Delete informaton \n\t\t");
    scanf("%s", &Delete);
    FILE *fptr;
    FILE *fp;
    fp = fopen("nuser.txt", "w");
    fptr = fopen("user.txt", "r");
    while (fscanf(fptr, "%s %s %d %d %s", &na, &va, &em) != EOF)
    {
        if (strcmp(Delete, em) != 0)
        {
            fprintf(fp, "%s \t %s \t %s \n\n ", na, va, em);
        }
        else
        {
            temp = Delete;
        }
    }
    fclose(fp);
    fclose(fptr);
    if (temp == Delete)
    {
        printf("your data Deleted");
        remove("user.txt");
        rename("nuser.txt", "user.txt");
    }
    else
    {
        printf("no record found");
    }

    printf("THNAK YOU!\n");
    printf("enter 1 to go home");
    scanf("%d", &one);
    if (one == 1)
    {
        home();
    }
}
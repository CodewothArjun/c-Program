#include <stdio.h>
#include <conio.h>
#include <string.h>
void registeration(int);
void select(int);
void update(int);
void delet(int);
void home(void);
void update_out(void);
int ho;
void main()
{
    system("cls");
    home();
}
// welocme page
void home()
{
    char str[] = "Welcome To covid vaccine Information page!";
    int width = 100;
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("\n");
    printf("you have following choices:\n\n");
    printf("1.Register your data if yo do not have registered(ENtER 1) \n");
    printf("2.view your information (ENtER 2) \n");
    printf("3.update information (ENtER 3) \n");
    printf("4.delete information (ENtER 4)\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        registeration(choice);
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
        delet(choice);
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

void registeration(int choice)
{
    char str[] = "Welcome to Registration page!\n";
    int width = 100;
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("To registor your information input following data");
    char temp, name[90], vaccine[90], email[90], na[90], va[90], em[90];
    int dose, id, count = 0, result = 0, d, idt;
    printf("\n\n Name:");
    scanf("%c", &temp);
    scanf("%[^\n]", name);
    printf(" Vaccine_Name:");
    scanf("%s", &vaccine);
    printf(" No of Dose:");
    scanf("%d", &dose);
    printf(" Citizenship_No:(integer only)\n");
    scanf("%d", &id);
    printf(" Email:");
    scanf("%s", &email);
    printf("\n\n");
    FILE *fptr;
    fptr = fopen("user.txt", "a");
    while (fscanf(fptr, "%s %s %d %d %s", &na, &va, &d, &idt, &em) != EOF)
    {
        if (id == idt)
        {
            result++;
        }
        if (id != idt)
        {
            result = result;
        }
    }
    if (result == 0)
    {
        fprintf(fptr, "%s \t %s \t %d \t %d \t %s \n ", name, vaccine, dose, id, email);
        printf("Data registered as: \n");
        printf("Name\tVaccine_Name\tDose\tCitizenship_No\tEmail \n");
        printf("%s \t %s \t %d \t %d \t %s \n\n ", name, vaccine, dose, id, email);
    }
    else
    {
        printf("Data already registered as: \n");
        printf("Name\tVaccine_Name\tDose\tCitizenship_No\tEmail \n");
        printf("%s \t %s \t %d \t %d \t %s \n\n ", name, vaccine, dose, id, email);
    }
    fclose(fptr);
    printf("THNAK YOU!\n");
    printf("GO HOME(press 1)");
    scanf("%d", &ho);
    if (ho == 1)
    {
        home();
    }
}

// select page

void select(int choice)
{
    char str[] = "Welcome To Search Information page!";
    int width = 100;
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("\n");

    int id, idt, d, temp = 0;
    char na[90], va[90], em[90];
    printf("please! enter your Citizenship_No to view informaton (integer only)\n");
    scanf("%d", &id);
    FILE *fptr;
    fptr = fopen("user.txt", "r");
    while (fscanf(fptr, "%s %s %d %d %s", &na, &va, &d, &idt, &em) != EOF)
    {
        if (id == idt)
        {
            printf("Your information: \n");
            printf("Name\tVaccine_Name\tDose\tCitizenship_No\tEmail \n");
            printf("%s \t %s \t %d \t %d \t %s \n\n ", na, va, d, idt, em);
            temp++;
        }
    }
    if (temp == 0)
    {
        printf("No result found \n\n");
    }
    fclose(fptr);
    printf("THNAK YOU!\n");
    printf("GO HOME(press 1)");
    scanf("%d", &ho);
    if (ho == 1)
    {
        home();
    }
}

// update page

void update(int choice)
{
    char str[] = "Welcome To Update Information page!";
    int width = 100;
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("\n");
    int idt, d, delet, temp = 0;
    char na[90], va[90], em[90];
    printf("please! enter your Citizenship_No to update informaton(integer only)\n");
    scanf("%d", &delet);
    FILE *fptr;
    FILE *fp;
    fp = fopen("nuser.txt", "w");
    fptr = fopen("user.txt", "r");
    while (fscanf(fptr, "%s %s %d %d %s", &na, &va, &d, &idt, &em) != EOF)
    {
        if (delet != idt)
        {
            fprintf(fp, "%s \t %s \t %d \t %d \t %s \n\n ", na, va, d, idt, em);
        }
        else
        {
            temp = idt;
        }
    }
    fclose(fp);
    fclose(fptr);
    if (temp == delet)
    {
        remove("user.txt");
        rename("nuser.txt", "user.txt");
        update_out();
    }
    else
    {
        printf("no record found\n\n");
    }

    printf("THNAK YOU!\n\n");
    printf("GO HOME(press 1)");
    scanf("%d", &ho);
    if (ho == 1)
    {
        home();
    }
}

void update_out()
{
    printf("Now, Enter your new information\n");
    char temp, name[90], vaccine[90], email[90], na[90], va[90], em[90];
    int dose, id, count = 0, result = 0, d, idt;
    printf("\n\n Name:");
    scanf("%c", &temp);
    scanf("%[^\n]", name);
    printf(" Vaccine_Name:");
    scanf("%s", &vaccine);
    printf(" No of Dose:");
    scanf("%d", &dose);
    printf(" Citizenship_No:(integer only)\n");
    scanf("%d", &id);
    printf(" Email:");
    scanf("%s", &email);
    printf("\n\n");
    FILE *fptr;
    fptr = fopen("user.txt", "a");
    while (fscanf(fptr, "%s %s %d %d %s", &na, &va, &d, &idt, &em) != EOF)
    {
        if (id == idt)
        {
            result++;
        }
        if (id != idt)
        {
            result = result;
        }
    }
    if (result == 0)
    {
        fprintf(fptr, "%s \t %s \t %d \t %d \t %s \n ", name, vaccine, dose, id, email);
        printf("Data updated as: \n");
        printf("Name\tVaccine_Name\tDose\tCitizenship_No\tEmail \n");
        printf("%s \t %s \t %d \t %d \t %s \n\n ", name, vaccine, dose, id, email);
    }
    else
    {
        printf("Data already Exist as: \n");
        printf("Name\tVaccine_Name\tDose\tCitizenship_No\tEmail \n");
        printf("%s \t %s \t %d \t %d \t %s \n\n ", name, vaccine, dose, id, email);
    }
    fclose(fptr);
}

// delete page

void delet(int choice)
{
    char str[] = "Welcome To Delete Information page!";
    int width = 100;
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("\n");

    int idt, d, delet, temp = 0;
    char na[90], va[90], em[90];
    printf("please! enter your Citizenship_No to Delete informaton (integer only)\n");
    scanf("%d", &delet);
    FILE *fptr;
    FILE *fp;
    fp = fopen("nuser.txt", "w");
    fptr = fopen("user.txt", "r");
    while (fscanf(fptr, "%s %s %d %d %s", &na, &va, &d, &idt, &em) != EOF)
    {
        if (delet != idt)
        {
            fprintf(fp, "%s \t %s \t %d \t %d \t %s \n\n ", na, va, d, idt, em);
        }
        else
        {
            temp = idt;
        }
    }
    fclose(fp);
    fclose(fptr);
    if (temp == delet)
    {
        printf("your data deleted");
        remove("user.txt");
        rename("nuser.txt", "user.txt");
    }
    else
    {
        printf("no record found");
    }

    printf("THNAK YOU!\n");
    printf("enter 1 to go home");
    scanf("%d", &ho);
    if (ho == 1)
    {
        home();
    }
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Register         
{
    char fname[15];
    char lname[15];
    char *email;
    char username[30];
    char password[20];
    char *gender;
    int day, year;
    char *month;
    char *location;
    char *state;
    int phoneNo;
    char bio;
    char timeZone;
    char fieldExpertise;
    char medlicNo;
    int yearsExp;
    char schoolAttend[70];

}patient, doctor;

void login (void);
void registration (void);
void doctorReg (void);
void patientReg (void);


void login (void)
{
    char username[30],password[20];
    FILE *log;

    log = fopen("login.txt","r");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }

    struct login;

    printf("\nPlease Enter your login credentials below\n\n");
    printf("Username:  ");
    fgets(username, 30, stdin);
    printf("\nPassword: ");
    printf("\n");
    fgets(password, 20, stdin);

    while(fread(&l,sizeof(l),1,log))
        {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)

            {
                printf("\nSuccessful Login\n");
            }
        else
            {
                printf("\nIncorrect Login Details\nPlease enter the correct credentials\n");
            }
        }

    fclose(log);

    return;
}




void registration(void)
{
    char firstname[15];
    FILE *log;

    log=fopen("login.txt","w");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }


    struct login;

    printf("\nWelcome, glad you are here, there is always something interesting about Today. We need to enter some details for registration.\n\n");
    printf("\nEnter First Name:\n");
    scanf("%c",l.fname);
    printf("\nEnter Surname:\n");
    scanf("%s",l.lname);

    printf("Thank you.\nNow please choose a username and password as credentials for system login.\nEnsure the username is no more than 30 characters long.\nEnsure your password is at least 8 characters long and contains lowercase, uppercase, numerical and special character values.\n");

    printf("\nEnter Username:\n");
    scanf("%s",l.username);
    printf("\nEnter Password:\n");
    scanf("%s",l.password);


    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\nConfirming details...\n...\nWelcome, %s!\n\n",firstname);
    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
        getchar();
    system("CLS");
    login();
}

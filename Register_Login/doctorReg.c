void doctorReg(void)
{
        FILE *log;

        log = fopen("login.txt", "a");
        if (log == NULL)
        {
                fputs("Error at opening File!", stderr);
                exit(1);
        }

    struct Register l;

    printf("\nWelcome, glad you are here, there is always something interesting about Today. We need to enter some details for registration.\n\n");
    printf("\nEnter First Name:\n");
    scanf("%s", l.fname);
    printf("\nEnter Surname:\n");
     scanf("%s", l.lname);
    printf("\nEmail:\n");
    scanf("%s", l.email);
    printf("\nEnter phoneNo:\n");
    scanf("%s", l.phoneNo);
    printf("Enter Birth Date (day month year): ");
    scanf("%d %s %d", &l.day, &l.month, &l.year);

    printf("Enter Location: ");
    scanf("%s", l.location);

    printf("Enter State: ");
    scanf("%s", l.state);
    printf("Enter Username: ");
    scanf("%s", l.username);

    printf("Enter Password: ");
    scanf("%s", l.password);
    printf("Enter Medical License No: ");
    scanf("%s", l.medlicNo);

    printf("Enter Field of Expertise: ");
    scanf("%s", l.fieldExpertise);

    printf("Enter Years of Experience: ");
    scanf("%d", &l.yearsExp);

    printf("Enter School Attended: ");
    scanf("%s", l.schoolAttend);



    fwrite(&l, sizeof(l), 1, log);
    fclose(log);

    printf("\nConfirming details...\n...\nWelcome, %s!\n\n", l.fname);
    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
    getchar();

    login();
}



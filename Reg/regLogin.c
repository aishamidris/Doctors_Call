#include <stdio.h>

int main ()
{
	int main (void)
{
    int option, select;

    printf("Press '1' to Register\nPress '2' to Login\n\n");
    scanf("%d",&option);

    getchar();           // catching newline.

    if(option == 1)
        {
                printf("press '1' to register as general user\nPress '2' toregister as a Medical practitioner\n\n");
        scanf("%d", &select);

        if (select == 1)
        {
            system("CLS");
            patientReg();
            }
        else
        {
        system("CLS");
        doctorReg();
        }
        }

    else if(option == 2)
        {
            system("CLS");
            login();
        }
}

}

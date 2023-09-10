#include <stdio.h>
#include "registration.h"
#include "login.h"

int main()
{
	int option, select;

	printf("Press '1' to Register\nPress '2' to Login\n\n");
	scanf("%d", &option);

	getchar(); // catching newline.
	
	if (option == 1)
	{
		printf("press '1' to register as a general user\nPress '2' to register as a Medical practitioner\n\n");
		scanf("%d", &select);

		if (select == 1)
		{
			registration();
		}
        else
        {
		doctorReg();
        }
    }
    else if (option == 2)
    {
        
        login();
    }

    return 0;
}

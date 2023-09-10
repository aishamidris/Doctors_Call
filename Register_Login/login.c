#include "login.h"

void login(void)
{
	char username[30], password[20];
	FILE *log;

	log = fopen("login.txt", "r");
	if (log == NULL)
	{
		fputs("Error at opening File!", stderr);
		exit(1);

}

#ifndef REGISTRATION_H
#define REGISTRATION_H

struct Register
{
    char fname[15];
    char lname[15];
    char email[50]; 
    char username[30];
    char password[20];
    char gender[10];
    int day, year;
    char month[15];
    char location[50]; 
    char state[30]; 
    int phoneNo;
    char bio; 
    char timeZone;
    char fieldExpertise; 
    char medlicNo[20];
    int yearsExp;
    char schoolAttend[70];


};

void registration(void);
void doctorReg(void);
#endif


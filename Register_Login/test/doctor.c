#include <stdio.h>
#include <ctype.h>
#include "doctor.h"
#include "validation.h"

// Function prototypes for validation functions (from the previous code)

int isValidEmail(const char *email);
int isValidDateOfBirth(const char *dob);
int containsUppercase(const char *str);

void captureDoctorInfo() {
    char name[50], surname[50], email[100], dob[10], username[50], password[50];
    int phone;
    char gender;
    char country[50], state[50], expertise[50], licenseNo[50], graduationYear[10], school[50], experience[10];
    char resetQuestion[100], resetAnswer[100];

    // Input for doctor registration
    printf("Doctor Registration:\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Surname: ");
    scanf("%s", surname);
    printf("Email: ");
    scanf("%s", email);
    printf("Date of Birth (dd/mm/yy): ");
    scanf("%s", dob);
    printf("Username: ");
    scanf("%s", username);
    printf("Phone Number: ");
    scanf("%d", &phone);
    printf("Gender (M/F): ");
    scanf(" %c", &gender);
    printf("Country: ");
    scanf("%s", country);
    printf("State: ");
    scanf("%s", state);
    printf("Field of Expertise: ");
    scanf("%s", expertise);
    printf("License Number: ");
    scanf("%s", licenseNo);
    printf("Graduation Year: ");
    scanf("%s", graduationYear);
    printf("School Attended: ");
    scanf("%s", school);
    printf("Years of Working Experience: ");
    scanf("%s", experience);

    do {
        printf("Password (at least one uppercase letter): ");
        scanf("%s", password);
    } while (!containsUppercase(password));

    printf("Password Reset Question: ");
    scanf("%s", resetQuestion);
    printf("Password Reset Answer: ");
    scanf("%s", resetAnswer);

    // Print captured information
    printf("\nCaptured Doctor Information:\n");
    printf("Name: %s %s\n", name, surname);
    printf("Email: %s\n", email);
    printf("Date of Birth: %s\n", dob);
    printf("Username: %s\n", username);
    printf("Phone Number: %d\n", phone);
    printf("Gender: %c\n", gender);
    printf("Country: %s\n", country);
    printf("State: %s\n", state);
    printf("Field of Expertise: %s\n", expertise);
    printf("License Number: %s\n", licenseNo);
    printf("Graduation Year: %s\n", graduationYear);
    printf("School Attended: %s\n", school);
    printf("Years of Working Experience: %s\n", experience);
    printf("Password: %s\n", password);
    printf("Password Reset Question: %s\n", resetQuestion);
    printf("Password Reset Answer: %s\n", resetAnswer);
}


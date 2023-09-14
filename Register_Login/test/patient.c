#include <stdio.h>
#include <ctype.h>
#include "patient.h"
#include "validation.h"

// Function prototypes for validation functions (from the previous code)

int isValidEmail(const char *email);
int isValidDateOfBirth(const char *dob);
int containsUppercase(const char *str);

void capturePatientInfo() {
    char name[50], surname[50], email[100], dob[10], country[50], state[50], username[50], password[50];
    int phone;
    char gender;
    char resetQuestion[100], resetAnswer[100];

    // Input for patient registration
    printf("Patient Registration:\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Surname: ");
    scanf("%s", surname);
    printf("Email: ");
    scanf("%s", email);
    printf("Date of Birth (dd/mm/yy): ");
    scanf("%s", dob);
    printf("Country: ");
    scanf("%s", country);
    printf("State: ");
    scanf("%s", state);
    printf("Username: ");
    scanf("%s", username);
    printf("Phone Number: ");
    scanf("%d", &phone);
    printf("Gender (M/F): ");
    scanf(" %c", &gender);

    do {
        printf("Password (at least one uppercase letter): ");
        scanf("%s", password);
    } while (!containsUppercase(password));

    printf("Password Reset Question: ");
    scanf("%s", resetQuestion);
    printf("Password Reset Answer: ");
    scanf("%s", resetAnswer);

    // Print captured information
    printf("\nCaptured Patient Information:\n");
    printf("Name: %s %s\n", name, surname);
    printf("Email: %s\n", email);
    printf("Date of Birth: %s\n", dob);
    printf("Country: %s\n", country);
    printf("State: %s\n", state);
    printf("Username: %s\n", username);
    printf("Phone Number: %d\n", phone);
    printf("Gender: %c\n", gender);
    printf("Password: %s\n", password);
    printf("Password Reset Question: %s\n", resetQuestion);
    printf("Password Reset Answer: %s\n", resetAnswer);
}


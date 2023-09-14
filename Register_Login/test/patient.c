#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h> // For password input
#include "patient.h"
#include "validation.h"

// Function prototypes
int containsUppercase(const char *str);

void capturePatientInfo() {
    char name[50], email[100], dob[10], country[50], state[50], username[50], password[7];
    int phone;
    char gender[10];

    // Input for patient registration
    printf("Patient Registration:\n");
    printf("Name: ");
    scanf("%s", name);
    
    // Email input with basic validation
    do {
        printf("Email: ");
        scanf("%s", email);
    } while (!isValidEmail(email));

    // Date of Birth input with basic validation
    do {
        printf("Date of Birth (dd/mm/yy): ");
        scanf("%s", dob);
    } while (!isValidDateOfBirth(dob));

    printf("Country: ");
    scanf("%s", country);
    printf("State: ");
    scanf("%s", state);

    // Username input with minimum length validation
    do {
        printf("Username (at least 3 characters): ");
        scanf("%s", username);
    } while (!isValidUsername(username));

    // Phone number input with integer validation
    do {
        printf("Phone Number (integer only): ");
        if (scanf("%d", &phone) != 1) {
            while (getchar() != '\n'); // Clear input buffer
        }
    } while (phone <= 0);

    // Gender input with validation
    do {
        printf("Gender (M/F or Male/Female): ");
        scanf("%s", gender);
    } while (!isValidGender(gender));

    // Password input with a minimum length of 6 characters
    do {
        printf("Password (at least 6 characters): ");
        int i = 0;
        char ch;
        while ((ch = getch()) != '\r' && ch != '\n') {
            if (i < 6) {
                password[i++] = ch;
                putchar('*'); // Display '*' for each character
            }
        }
        password[i] = '\0';
        printf("\n");
    } while (!isValidPassword(password));

    printf("Password Reset Question: ");
    char resetQuestion[100];
    scanf("%s", resetQuestion);

    printf("Password Reset Answer: ");
    char resetAnswer[100];
    scanf("%s", resetAnswer);

    // Print captured information
    printf("\nCaptured Patient Information:\n");
    printf("Name: %s\n", name);
    printf("Email: %s\n", email);
    printf("Date of Birth: %s\n", dob);
    printf("Country: %s\n", country);
    printf("State: %s\n", state);
    printf("Username: %s\n", username);
    printf("Phone Number: %d\n", phone);
    printf("Gender: %s\n", gender);
    printf("Password: %s\n", password);
    printf("Password Reset Question: %s\n", resetQuestion);
    printf("Password Reset Answer: %s\n", resetAnswer);
}


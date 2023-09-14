#include <stdio.h>
#include <string.h>
#include "login.h"

int isUserRegistered(const char *username, const char *password, const char *userType) {
    // You can implement user registration data retrieval and validation here
    // For simplicity, let's assume you have predefined user data
    
    // Example predefined user data
    char registeredUsername[50] = "testuser";
    char registeredPassword[50] = "Test123"; // Example password
    char registeredUserType[20] = "patient"; // "patient" or "doctor" based on the user type

    if (strcmp(username, registeredUsername) == 0 && strcmp(password, registeredPassword) == 0 &&
        strcmp(userType, registeredUserType) == 0) {
        return 1; // User is registered
    } else {
        return 0; // User is not registered or credentials are incorrect
    }
}

int loginUser() {
    char username[50];
    char password[50];
    char userType[20];

    printf("Login\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
int i = 0;
char ch;
while (i < sizeof(password) - 1) {
    ch = getchar();
    if (ch == '\n' || ch == '\r') {
        break; // Stop reading when Enter is pressed
    }
    putchar('*'); // Display '*' for each character
    password[i++] = ch;
}
password[i] = '\0';
printf("\n");

    printf("User Type (patient/doctor): ");
    scanf("%s", userType);

    if (isUserRegistered(username, password, userType)) {
        printf("Login Successful!\n");
        return 1; // Successful login
    } else {
        printf("Login Failed. Invalid credentials or user not registered.\n");
        return 0; // Failed login
    }
}


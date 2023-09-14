#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "validation.h"

int isValidEmail(const char *email) {
    // Basic email format check (presence of '@' and '.com')
    int at_count = 0;
    int dotcom_count = 0;

    while (*email) {
        if (*email == '@') {
            at_count++;
        } else if (*email == '.' && at_count == 1) {
            dotcom_count++;
        }
        email++;
    }

    return (at_count == 1 && dotcom_count == 1);
}

int isValidDateOfBirth(const char *dob) {
    int day, month, year;
    if (sscanf(dob, "%d/%d/%d", &day, &month, &year) == 3) {
        if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 0 && year <= 99) {
            return 1; // Valid date of birth
        }
    }
    return 0; // Invalid date of birth
}

int isValidUsername(const char *username) {
    return (strlen(username) >= 3);
}

int isValidGender(const char *gender) {
    char lowercase[10];
    int i = 0;
    while (gender[i]) {
        lowercase[i] = tolower(gender[i]);
        i++;
    }
    lowercase[i] = '\0';

    return (strcmp(lowercase, "m") == 0 || strcmp(lowercase, "f") == 0 ||
            strcmp(lowercase, "male") == 0 || strcmp(lowercase, "female") == 0);
}

int isValidPassword(const char *password) {
    return (strlen(password) >= 6);
}

int containsUppercase(const char *str) {
    while (*str) {
        if (isupper(*str)) {
            return 1; // Contains uppercase letter
        }
        str++;
    }
    return 0; // No uppercase letter
}



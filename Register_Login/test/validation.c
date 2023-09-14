#include <stdio.h>
#include <ctype.h>
#include "validation.h"

int isValidEmail(const char *email) {
    // You can implement a more robust email validation logic here
    // For simplicity, we'll just check for the presence of '@'
    while (*email) {
        if (*email == '@') {
            return 1; // Valid email
        }
        email++;
    }
    return 0; // Invalid email
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

int containsUppercase(const char *str) {
    while (*str) {
        if (isupper(*str)) {
            return 1; // Contains uppercase letter
        }
        str++;
    }
    return 0; // No uppercase letter
}


#include <stdio.h>
#include "patient.h"
#include "doctor.h"

int main() {
    int choice;

    printf("Welcome to the Registration System\n");
    printf("1. Register as Patient\n");
    printf("2. Register as Doctor\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        capturePatientInfo();
    } else if (choice == 2) {
        captureDoctorInfo();
    } else {
        printf("Invalid choice. Please choose 1 or 2.\n");
    }

    return 0;
}


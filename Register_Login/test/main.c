

#include <stdio.h>
#include "patient.h"
#include "doctor.h"
#include "login.h" // Include the login header

int main() {
    int choice;
    printf("Welcome to the Registration System!\n");

    while (1) {
        printf("\nMain Menu:\n");
        printf("1. Register as a Patient\n");
        printf("2. Register as a Doctor\n");
        printf("3. Login\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                capturePatientInfo();
                break;
            case 2:
                captureDoctorInfo();
                break;
            case 3:
                if (loginUser()) {
                    // Implement logic for logged-in users (e.g., menu for logged-in users)
                    // You can redirect the user to different functionality based on their userType
                }
                break;
            case 4:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


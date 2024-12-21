#include <stdio.h>
#include "tasks.h"  // Include the shared header file

int main() {
    int choice;

    while (1) {
        // Print menu
        printf("\n==== Master Menu ====\n");
        printf("1. Run Task 1\n");
        printf("2. Run Task 2\n");
        printf("3. Run Task 3\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        // Get user choice
        scanf("%d", &choice);

        // Call the appropriate task's main function
        switch (choice) {
            case 1:
                main_a();
                break;
            case 2:
                main_b();
                break;
            case 3:
                main_c();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

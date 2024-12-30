#include <stdio.h>
#include "tasks.h" // Include the shared header file

int main()
{
    int choice;

    while (1)
    {
        // Print menu
        printf("\n==== Master Menu ====\n");
        printf("1. Run Task 1\n");
        printf("2. Run Task 2\n");
        printf("3. Run Task 3\n");
        printf("4. Run Task 4\n");
        printf("5. Run Task 5\n");
        printf("6. Run Task 6\n");
        printf("7. Run Task 7\n");
        printf("8. Run Task 8\n");
        printf("9. Run Task 9\n");
        printf("10. Run Task 10\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");

        // Get user choice
        scanf("%d", &choice);

        // Call the appropriate task's main function
        switch (choice)
        {
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
            main_d();
            break;
        case 5:
            main_e();
            break;
        case 6:
            main_f();
            break;
        case 7:
            main_g();
            break;
        case 8:
            main_h();
            break;
        case 9:
            main_i();
            break;
        // case 10:
        //     main_j();
        //     break;
        case 11:
            printf("Exiting program. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

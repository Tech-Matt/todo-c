#include <stdio.h>

int main() {
    char choice;

    while(1) {
        printf("\n==== TODO APP ====\n\n");
        printf("Commands:\n");
        printf("'l' -- list task\n");
        printf("'n' -- new task\n");
        printf("'d' -- delete task\n");
        printf("'q' -- quit app\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice); // the space is to skip whitespace

        switch (choice) {
            case 'l':
                printf("Listing tasks...\n");
                break;
            case 'n':
                printf("Adding tasks...\n");
                break;
            case 'd':
                printf("Deleting task...\n");
                break;
            case 'q':
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice, try again.\n");
        }
    }
}
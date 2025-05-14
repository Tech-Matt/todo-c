#include <stdio.h>
#include "../include/task.h"


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
        scanf("%c", &choice);
        getchar();  // Consume leftover newline

        switch (choice) {
            case 'l':
                printf("Listing tasks...\n");
                list_tasks();
                break;
            case 'n':
                printf("Adding tasks...\n");
                new_task();
                break;
            case 'd':
                printf("Deleting task...\n");
                delete_task();
                break;
            case 'q':
                printf("Goodbye!\n");
                quit();
                return 0;
            default:
                printf("Invalid choice, try again.\n");
        }
    }
}
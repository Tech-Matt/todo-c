#include <stdio.h>
#include <string.h>
#include "../include/task.h"

Task tasks[MAX_TASKS];
int task_count = 0;

void list_tasks() {
    if(task_count == 0) {
        printf("\nNo tasks yet!\n");
        return;
    }
    for (int i = 0; i < task_count; i++) {
        printf("%d. [%c] %s\n", i+1, tasks[i].completed ? 'x' : ' ', 
               tasks[i].description);
    }

}

void new_task() {
    if (task_count >= MAX_TASKS) {
        printf("Task list is full!\n");
        return;
    }
    printf("\nEnter task description: ");
    fgets(tasks[task_count].description, sizeof(tasks[task_count].description),
          stdin);
    tasks[task_count].description[strcspn(tasks[task_count].description, "\n")] = 0;
    tasks[task_count].completed = false;
    task_count++;
    printf("Task Added\n");
}


void delete_task() {
    int num;
    printf("Enter task number to delete: ");
    scanf("%d", &num);
    if (num < 1 || num > task_count) {
        printf("Invalid task number.\n");
        return;
    }
    for (int i = num - 1; i < task_count - 1; i++) {
        tasks[i] = tasks[i + 1];
    }
    task_count--;
    printf("Task deleted!\n");
}

void quit() {
    printf("Exiting...\n");
}
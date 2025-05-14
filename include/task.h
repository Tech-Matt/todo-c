#ifndef TASK_H
#define TASK_H

#include <stdbool.h>

#define MAX_TASKS 50

typedef struct {
    char description[100];
    bool completed;
} Task;

// FUNCTION DECLARATIONS
void list_tasks();
void new_task();
void delete_task();
void quit();





#endif  //TASK_H
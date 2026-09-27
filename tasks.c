#include <stdio.h>
#include <stdlib.h>

typedef enum {
    TODO,
    IN_PROGRESS,
    DONE    
} status;

typedef struct Tasks{
    int id;
    char title[60];
    char content[300];
    status statut;
} Task;



#ifndef TASKS_H
#define TASKS_H

int somme(int a, int b);

typedef enum {
    TODO,
    IN_PROGRESS,
    DONE    
} status;

typedef struct {
    int id;
    char title[60];
    char content[300];
    status statut;
} Task;


// --- INTERFACE ---
Task create_task(int id, const char *title, const char *content);
void render_task(const Task *t);
void edit_task(Task *task, const char *title, const char *content);
void edit_status(Task *task, status sts);
void delete_task(Task *task);

#endif
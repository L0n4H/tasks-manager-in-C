#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tasks.h"

int somme(int a, int b) {
    return a + b;
}

Task create_task(int id, const char *title, const char *content){
    Task t;
    t.id = id;
    t.statut = TODO; // la tâche est a faire par défaut
    int written = snprintf(t.title, sizeof(t.title), "%s", title);
    if (written >= (int)sizeof(t.title)) {
        printf("Attention : Le titre était trop long, il a été tronqué !\n");
    }
    int written = snprintf(t.content,sizeof(t.content),"%s",content);
    if (written >= (int)sizeof(t.content)) {
        printf("Attention : La description de la tache était trop long, il a été tronqué !\n");
    }
    return t;
};


#ifndef USER_H
#define USER_H

typedef struct {
    int id;
    char* name;
} user_t;

void user_init(user_t* user);

#endif
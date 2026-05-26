#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int id;
    char name[50];
} Student;

void add_student();
void search_student();
void display_students();

#endif

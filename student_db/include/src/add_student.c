#include <stdio.h>
#include "../include/student.h"

void add_student() {
    FILE *fp = fopen("students.txt", "a");

    Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    fprintf(fp, "%d %s\n", s.id, s.name);

    fclose(fp);

    printf("Student Added Successfully\n");
}

#include <stdio.h>
#include "../include/student.h"

void display_students() {

    FILE *fp = fopen("students.txt", "r");

    Student s;

    while(fscanf(fp, "%d %s", &s.id, s.name) != EOF) {
        printf("%d %s\n", s.id, s.name);
    }

    fclose(fp);
}

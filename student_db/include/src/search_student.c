#include <stdio.h>
#include <string.h>
#include "../include/student.h"

void search_student() {

    FILE *fp = fopen("students.txt", "r");

    int id;
    Student s;
    int found = 0;

    printf("Enter ID to search: ");
    scanf("%d", &id);

    while(fscanf(fp, "%d %s", &s.id, s.name) != EOF) {

        if(s.id == id) {
            printf("Found: %d %s\n", s.id, s.name);
            found = 1;
        }
    }

    if(!found)
        printf("Student not found\n");

    fclose(fp);
}

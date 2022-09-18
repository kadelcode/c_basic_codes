#include <stdio.h>
#include <string.h>

// Union is the same as the Structure, except allocating memory for their members.
// All members share the same memory location

int main() {
    union student
    {
        int id;
        char name[30];
        char specialization[30]; 
    };

    union student s1;
    s1.id = 41;
    strcpy(s1.name,"Harry Noel");
    strcpy(s1.specialization,"Accounting");

    printf("Student Details:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Profession: %s\n", s1.specialization);
    
    return 0;
}
#include <stdio.h>
#include <string.h>

// Unlike arrays, a structure variable stores data of different data type
struct student {
    char name[50];//string
    int part;
    int age;
};


void main() {
    struct student s1;
    strcpy(s1.name ,"Ayodele Kadiri");
    s1.part = 5;
    s1.age = 22;

    printf("%s", s1.name);
}
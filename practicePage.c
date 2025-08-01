#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float cgpa;
};

int main () {
    struct Student s1;

    s1.age = 10;
    s1.cgpa = 3.5;
    printf("%d %f\n", s1.age, s1.cgpa);

    struct Student s2;
    s2.age = 30;
    s2.cgpa = 4.00;
    printf("%d %f\n", s2.age, s2.cgpa);

    return 0;
}
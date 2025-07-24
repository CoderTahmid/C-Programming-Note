#include <stdio.h>
#include <string.h>

/*
Usually amra ekta array te same data type store korte pari right?
either only char, int or float
but structure e amra ek sathe onek data type store korte parbo
it's more like JavaScript's object LOL
*/

struct student {
    int roll;
    float cgpa;
    char name[100];
}; // this is how we define a structure

int main()
{
    struct student s1;

    s1.roll = 19;
    s1.cgpa = 9.2;
    strcpy(s1.name, "tahmid"); 
        /*
        ebhabe strcpy use korar reason hocche
        string'r value directly change kora jay nah
        karon ultimately string o ekta array
        etar address dhore change kora lageh
        */
    printf("Student name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student CGPA: %.2f\n", s1.cgpa);
        /*
        and this is how we are gonna print these data
        */

    return 0;
}

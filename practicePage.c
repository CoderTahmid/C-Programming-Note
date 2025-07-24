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
}; // this is how we declare a structure

int main()
{
    struct student s1;
    s1.roll = 19;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Tahmid"); 
        /*
        ebhabe strcpy use korar reason hocche
        string'r value directly change kora jay nah
        karon ultimately string o ekta array
        etar address dhore change kora lageh
        */
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);
    printf("\n");
        /*
        and this is how we are gonna print these data
        */

    // using a same structure for another variables
    struct student s2;
    s2.roll = 20;
    s2.cgpa = 9.4;
    strcpy(s2.name, "Maruf");
    printf("Name: %s\n", s2.name);
    printf("Roll: %d\n", s2.roll);
    printf("CGPA: %.2f\n", s2.cgpa);
    printf("\n");

    struct student s3;
    s3.roll = 90;
    s3.cgpa = 9.8;
    strcpy(s3.name, "Latina");
    printf("Name: %s\n", s3.name);
    printf("Roll: %d\n", s3.roll);
    printf("CGPA: %.2f\n", s3.cgpa);

    return 0;
}

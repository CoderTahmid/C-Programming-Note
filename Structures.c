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
    printf("\n");

    // Array of structures
    struct student ECE[100]; // mane hocche ami ekhn ei ECE'r moddhe 100 ta data rakhte parbo

    ECE[0].roll = 1665;
    ECE[0].cgpa = 9.3;
    strcpy(ECE[0].name, "Karimul");

    printf("ECE 1st Name: %s\n", ECE[0].name);
    printf("ECE 1st Roll: %d\n", ECE[0].roll);
    printf("ECE 1st CGPA: %.2f\n", ECE[0].cgpa);
    printf("\n");

    // Initializing structures
    struct student s4 = {122, 9.3, "Mim"};
    printf("Name: %s\t Roll: %d\t CGPA: %.2f\n", s4.name, s4.roll, s4.cgpa);

    return 0;
}

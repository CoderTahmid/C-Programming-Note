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
// here the roll, cgpa, name is the members of this student structure

typedef struct employee {
    char name[100];
    int salary;
    float workRating;
} emp;

void printInfo(struct employee e1);

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

    // Pointers to structure
    struct student s5 = {1212, 8.9, "Mahadi"};
    printf("Roll at 1st time: %d\n", s5.roll);
    struct student *ptrS5 = &s5; // ekhane s5 er memory address ptrS5 variable e store kora hocche
    printf("Roll at 2nd time: %d\n", (*ptrS5).roll);
        /*
        ekhane ptrS5 e store ache whole s5 ta
        ar *ptrS5 eqaul to mean kore je value at address ptrS5
        */
    
    // Using arrow (->) operator
    printf("printing s5 using arrow operator\n");
    printf("Name: %s\n", ptrS5 -> name);
    printf("Roll: %d\n", ptrS5 -> roll);
    printf("CGPA: %.2f\n", ptrS5 -> cgpa);

    // passing structure to a function
    struct employee e1;
    strcpy(e1.name, "Tahmid");
    e1.salary = 372;
    e1.workRating = 6.3;
    printInfo(e1);
        /*
        one thing to know
        structure function e pass korle sheita
        call by value hoy
        orthat main data'r ekta copy pass hoy
        */

    // using typedef keyword 
    emp e2;
    strcpy(e2.name, "Nomita");
    e2.salary = 463722222;
    e2.workRating = 7.2;
    printf("About e2\n");
    printf("Name: %s\n", e2.name);
    printf("Salary: %d\n", e2.salary);
    printf("WR: %.2f\n", e2.workRating);
        /*
        basically what we are doing?
        amra ekhane just simply emp likhei arekta new insurance nite partasi employee stucture'r
        
        typedef basically ja kore ta holo je
        she oi structure'r ekta nickname dey or you can say alias dite use hoy
        amra ekhane employee structure ke name disi emp
        and simply just emp ke call diyei amra ei structure'r value set korte partasi
        
        noticeable bishoy hocche
        amra ei only emp call koreo structure'r member gulor value define korte parbo
        abar ager way te 
        structure employee e2
        ebhabeo korte parbo
        */

    return 0;
}

void printInfo ( struct employee e1 ) {
    printf("Printing from another function\n");
    printf("Name: %s\n", e1.name);
    printf("Salary: %d\n", e1.salary);
    printf("WR: %.2f\n", e1.workRating);
    printf("\n");
}

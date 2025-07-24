#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main () {

    struct student ECE[100]; // mane hocche ami ekhn ei ECE'r moddhe 100 ta data rakhte parbo

    ECE[0].roll = 1665;
    ECE[0].cgpa = 9.3;
    strcpy(ECE[0].name, "Karimul");

    printf("Name: %s\n", ECE[0].name);
    printf("Roll: %d\n", ECE[0].roll);
    printf("CGPA: %.2f\n", ECE[0].cgpa);
    printf("\n");

    return 0;
}
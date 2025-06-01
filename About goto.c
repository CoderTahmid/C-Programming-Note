#include <stdio.h>

int main()
{
    int a = 4;
    
    if (a = 4) {
        goto skip;
    }

    printf("King");
    if (a = 4) {
        printf("Messi");
    }

    skip:
        printf("This line will be print");

    /*
    output: This line will be print
    so ekhane ja hocche ta holo je
    jokhon a = 4
    prothom if block'r condition shotto houay program ta if block e jabe
    and oi goto skip ke hit korbe
    and er por aro joto code e thakuk na keno
    shegula ar kaj korbe na, skip hoy jabe
    and oi "skip" er bhitor theke then baki kaj shuru hbeh
    */
}
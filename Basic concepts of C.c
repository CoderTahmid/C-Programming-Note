#include <stdio.h>

/*
What is C Programming?
C is a low-level, procedural programming language.
*/

/*
About this "include" keyword
The #include keyword in C is a preprocessor directive
that tells the compiler to include the contents of a specified file (usually a header file)
before compiling the program.
*/

/*
Why is main function of type int?
The main function returns an integer (int). 
This return value is sent to the operating system to indicate whether the program ran successfully.

Returning 0 means the program completed successfully.
Returning a non-zero value indicates an error
*/

int main()
{

    /*
    Why we alwasys write this "main" function?
    In C, execution always starts from the main function.
    The operating system looks for main as the entry point of my program.
    */

    printf("King");

    return 0;
}

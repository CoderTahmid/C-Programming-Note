#include <stdio.h>

// pass by value vs pass by reference

void normalChange(int n) {
    n = 50;
}

void changeByPointer(int *p) {
    *p = 500;
}

int main() {
    int a = 5;
    normalChange(a); // this is what we call call-by-value
    printf("%d\n", a); // output: 5
    /*
    as we can see the value has not changed
    value 5 e roye geche
    er karon hocche  je
    amra jokhon a variable ta ke normalChange function e pathacchi
    ekhane muloto jacche only a copy of the variable
    not the real variable
    mane a er ekta copy jacche oi function e, and oi function e giye o or moto kaj kortase
    real a value ta jacche na
    er jonnei a er value ta change hoy naih
    and eta kei bole call by value
    */

    int b = 10;
    int *p = &b;
    changeByPointer(p);
    printf("%d\n", b); // output: 500
    /*
    so ekhane ja hocche ta holo je
    b er memory address (which is stored in p) passed to the function changeByPointer()
    eibar shei changeByPointer function e
    shei address e new ekta value write kora hocche(which is 500)
    ebar kintu ager moto variable'r copy pathano hocche nah
    variable'r address pass kora hocche 
    and shei address dhore she value change kortase
    and this is what we call-by-reference
    */

    return 0;
}
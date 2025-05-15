#include <stdio.h> 

int main() {

    int a, b;
    int sum = a + b;
    int sub = a - b;
    int multi = a * b;

    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, sum);
        /*
        output: 2 + 2 = 1835007762
        as we can see ekhane sum'r man garbage ashtase
        er karon ki?
        let's go through the program again, what's actually happening here.
        in the first line of my program I initialized a and b.
        then set the value of sum to a + b
        now in the line where I initialized the value, they were garbaje value initially.
        mane kahini hocche, jokhon ami 2 ta variable initialize kori tokhon tader value
        default bhabe garbage thake (just inialize korar shomoy, value dile abar shei value e hbe)
        now sum = a + b = garbage + garbage = garbage
        then let's go to the scanf line
        sekhane kintu a and b er value newa hoise user theke
        tokhon kintu a and b er value ar garbage nai 
        tokhn user jeta dibe shetai hocche a and b er value
        er jonnei muloto amra oi printf line e emon ekta unexpected output pai
        */
    printf("%d - %d = %d\n", a, b, sub); // output: 2 - 2 = -1142950143, same concept also etar jonnou

    printf("%d * %d = %d", a, b, a*b);
        /*
        output: 2 * 4 = 8
        ekhane abar shundor output ashche
        cause ekhane kintu oi miulti variable ta ke use kora hoy nai
        ekhane direct oi a and b ke gun kora hoise
        and user theke a and b er value ekbar newa por 
        a and b er value ar garbage thake nah
        sheta change hoy real kono value te eshe pore
        */
    return 0;
}
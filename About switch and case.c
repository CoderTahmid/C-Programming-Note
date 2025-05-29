#include <stdio.h>

int main()
{
    int a = 4;
    switch (a)
    {
        case 1:
            printf("Fail\n");
            break;
        case 2:
            printf("Fail\n");
            break;
        case 3:
            printf("Fail\n");
            break;
        case 4:
            printf("Pass\n");
            break;
        case 5:
            printf("fail\n");
            break;
        default:
            printf("Not even close\n");
            break;

        /*
        output: pass
        ekhane basically ja hoy
        switch() er bhitore amra ekta value dei
        oita ke basically expression bole
        now my code gonna do something based on that expression
        ekhane "a" er jonne check kora hocche
        code ta kichuta emon bole je
        case 1 er jonne fail print koro and then break the loop
        case 2 er jonneo fail print koro and then break the loop
        case 3 er jonneo fail print koro and then break the loop
        only ek matro case 4 dr jonne pass print koro and break the loop
        ar jodi, egula ekta case o na hoy
        tahole default bhabe "Not even close" print koro

        what if amra ekhane "break" use na kortam after every printf line?
        ki hoto tokhon
        tokhon jeta hoto  ta holo je
        case 4 e eshe jokhon oi code ta execute hoito
        tar thik por por e abar tar niche case'r code ta execute hoye jaito
        mane automatically case 5'r code ta execute hoye jaito and print korto fail
        ebhabe break na use korle
        jei case ta ekbar mile jabe tar nicher gula automatically execute hbe,
        niche jotgula case e thakuk na keno
        */
    }

    char ch = 'd';
    switch(ch)
    {
        case 'a':
            printf("fail\n");
            break;
        case 'b':
            printf("fail\n");
            break;
        case 'c':
            printf("fail\n");
            break;
        case 'd':
            printf("pass\n");
            break;
        default:
            printf("not even closer\n");

        /*
        eta teo same logic as the previous one 
        just eta character'r jonne kora hoise
        */
    }

}
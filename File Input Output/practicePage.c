#include <stdio.h>

/*
File opening modes
fopen(file name, mode);
amra ekhane kisu mode pass kori, 
they are

"r" -->
open to read
now suppose we are doing this 
fptr = fopen("king.txt", "r");
ekhane kintu king.txt name e kono file nai
tai fptr e ekta null value set hbe

"rb" -->
open to read in binary
same thing will happen what will happen in "r" 
if we try to open a file that doesn'y exist

"w" -->
open to write
dhorlam 
amra emon ekta file e kichu write korte chai
jeta kina exist kore nah
tahole ei "w" jeta korbe ta holo je
she oi name'r ekta file nije create kore nibe
then write korbe

ar jodi ekta existing file e amra write kori
tahole jeta hbe
shei file ta open hbe and oi file e thaka previous data gulo delete hoye jabe
and new written data gulo ashbe sekhane 

"wb" -->
open to write in binary
the thing I meantioned about about 
if file exist 
if not
in the "w" section
same thing will happen here also

"a" -->
open to append
append mane jog kora
like amra emon intention e file ta open korlam
jekhane previous data'r sathe new data gula append hbe
ete ager data o thakbe and new data gulao ashbe
*/

int main () {
    FILE *fptr; 
        /*
        So what we are doing here in this line
        ekhane FILE hocche ekta structure jeta kina stdio.h e define kora ache
        amra ei FILE structure tar address fptr e store kortasi

        what is this FILE exactly?
        basically FILE is something that we need for work with a file, like file closing or opening 
        we programmers do not need to know about the defination of this FILE
        it is hidden from us
        amra ei fptr e FILE structure'r address store kore kisu task perform kori arki
        */

    fptr = fopen("test.txt", "r");
        /*
        here in this line
        we are telling the compiler to open the file named test.txt
        and the intention of opening the file is reading it, as we pass the 2nd value "r"
        "r" represents reading
        */
    
    return 0;
}
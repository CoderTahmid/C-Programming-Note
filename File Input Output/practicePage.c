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
    fclose(fptr);
        /*
        here we are closing the file that we opened
        karon file close na korle 
        joto bar amra program run korbo totobar file ta open hote chabe
        and jeta ekta bad thing, ete amader program slow hbe
        */

    FILE *fptr2;
    fptr2 = fopen("king.txt", "r");
    if (fptr2 == NULL) {
        printf("File doesn't exist\n"); // output: File doesn't exist
    } else {
        fclose(fptr2);
    }
    /*
    so what is happening here?
    first e 
    fptr2 te amra king.txt file open korar try korsi read korara intention e
    but ei name e kono file nei 
    er jonne oi fptr2 er value hoise NULL
    and er jonnei oi output ashche
    ar file ta thakle
    amra just simply close kore ditam eta ke 
    karon apadoto kono kaj kortasi na er dara
    */

    // Reading from a file
    /*
    simple reading concept

    char ch;
    fscanf(fptr, "%c", &ch);
    first parameter tells us kon file theke amder data read korte hbe
    2nd parameter tells us what type of data we are we will be reading
    3rd parameter tell us where to store the value that we just read, ekhane amra ch variable e shei read kora jinish ta store kortasi
    */
    char ch;
    FILE *fptr3;
    fptr3 = fopen("test.txt", "r");
    printf("From test.txt file\n");
    fscanf(fptr3, "%c", &ch);
    printf("character = %c\n", ch); // output: character = A
    fscanf(fptr3, "%c", &ch);
    printf("character = %c\n", ch); // output: character = p
    fscanf(fptr3, "%c", &ch);
    printf("character = %c\n", ch); // output: character = p
    /*
    by writing this same thing twice and thrice we can get the 
    next characters
    */
    fclose(fptr3);

    int n;
    FILE *fptr4;
    fptr4 = fopen("test2.txt", "r");
    printf("From test2.txt file\n");
    fscanf(fptr4, "%d", &n);
    printf("%d\n", n); // output: 1234
    fclose(fptr4);

    // writing to a file
    /*
    simple syntax of writing to a file
    fprintf(fptr, "%d", "9999");
    same as fscanf()
    first parameter pointer ta jabe, I mean jei file e write korte chai
    2nd parameter ta format specifier, or you can say jei data ta write korte chai shetar format
    3rd parameter ta hocche text jeta amra onno file e print korte chai
    */
    FILE *fptr5;
    fptr5 = fopen("test3.txt", "w");
    fprintf(fptr5, "%d", 12212); // so test3.txt te age chilo king, now the text become 12212
    fclose(fptr5);

    // append data to any file
    FILE *fptr6;
    fptr6 = fopen("test4.txt", "a");
    fprintf(fptr6, "%s", "TAHMID"); // ekhane test4.txt file e only MANGO chilo, ekhn er sathe jog holo TAHMID, now new text of test4.txt is MANGOTAHMID
    fclose(fptr6);

    // Reading character by character
    FILE *fptr7;
    fptr7 = fopen("test5.txt", "r");
    char firstChar = fgetc(fptr7);
    printf("%c\n", firstChar); // output: N 

    // character by character writing
    FILE *fptr8;
    fptr8 = fopen("test6.txt", "w");
    fputc('F', fptr8); // previous pura text ta muche 'F' hoye geseh only

    return 0;
}
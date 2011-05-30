#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char year[] = "0000";

    printf("\nEnter the year to convert:");

    scanf("%4s", year);//only look at 4 characters of the string so we don't break the data structure

    char *my_pointer = year;

    char thousands[3] = "0";
    char hundreds[2] = "0";
    char tens[2] = "0";
    char ones[2] = "0";


//step through the characters in year and put each in its own variable (thousands, hundreds, tens, ones)

    thousands[0] = *my_pointer;
    hundreds[0] = *(my_pointer + 1);
    tens[0] = *(my_pointer + 2);
    ones[0] = *(my_pointer + 3);

    printf("\nThere are %s thousands.\nThere are %s hundreds.\nThere are %s tens.\nThere are %s ones.\n\n", thousands, hundreds, tens, ones);

//convert strings to integers in new variables with the "_i" suffix so we can manipulate them

    int thousands_i = atoi(thousands);
    int hundreds_i = atoi(hundreds);
    int tens_i = atoi(tens);
    int ones_i = atoi(ones);


//M is the highest Roman numeral, so we may need a bunch of these
    while (thousands_i > 0){
        printf("M");
        thousands_i --;
    }

    switch (hundreds_i){
        case 1: printf("C");
        break;
        case 2: printf("CC");
        break;
        case 3: printf("CCC");
        break;
        case 4: printf("CD");
        break;
        case 5: printf("D");
        break;
        case 6: printf("DC");
        break;
        case 7: printf("DCC");
        break;
        case 8: printf("DCCC");
        break;
        case 9: printf("CM");
        break;
    }

    switch(tens_i){
        case 1: printf("X");
        break;
        case 2: printf("XX");
        break;
        case 3: printf("XXX");
        break;
        case 4: printf("XL");
        break;
        case 5: printf("L");
        break;
        case 6: printf("LX");
        break;
        case 7: printf("LXX");
        break;
        case 8: printf("LXXX");
        break;
        case 9: printf("XC");
        break;
        default:
        break;
    }


    switch(ones_i){
        case 1: printf("I");
        break;
        case 2: printf("II");
        break;
        case 3: printf("III");
        break;
        case 4: printf("IV");
        break;
        case 5: printf("V");
        break;
        case 6: printf("VI");
        break;
        case 7: printf("VII");
        break;
        case 8: printf("VIII");
        break;
        case 9: printf("IX");
        break;
        default:
        break;
    }


printf(" is the roman numeral for %s.\n\n\n", year);



 return 0;
}

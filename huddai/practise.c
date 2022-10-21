//Logic to check alphabet, digit or special character

#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    /* Alphabet check */
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch -'0'>= 0 && ch-'0' <= 9)
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}



/**
 * C program to check whether a character is alphabet or not
 */
// Program to check alphabets using ASCII value

#include <stdio.h>

int main()
{
    char ch;

    /* Input a character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }

    return 0;
}




/**
 * C program to check whether a character is vowel or consonant
 */

#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    /* Condition for vowel */
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        /* Condition for consonant */
        printf("'%c' is Consonant.", ch);
    }
    else 
    {
        /*
         * If it is neither vowel nor consonant
         * then it is not an alphabet.
         */
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}


/**
 * C program to check whether a character is uppercase 
 * or lowercase using inbuilt library functions
 */

#include <stdio.h>
#include <ctype.h> /* Used for isupper() and islower() */

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);

    if(isupper(ch))
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(islower(ch))
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}


/**
 * C program to print day name of week
 */



// --------------------------------------------------------------------------------------------------------------------------------
// Step by step descriptive logic to print day name of week.

// Input week day number from user. Store it in some variable say week.
// Print Monday if(week == 1). I have assumed Monday as first day of week.
// Similarly, check condition for all 7 days and print the corresponding day name


#include <stdio.h>

int main()
{
    int week;

    /* Input week number from user */
    printf("Enter week number (1-7): ");
    scanf("%d", &week);


    if(week == 1)
    {
        printf("Monday");
    }
    else if(week == 2)
    {
        printf("Tuesday");
    }
    else if(week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("Thursday");
    }
    else if(week == 5)
    {
        printf("Friday");
    }
    else if(week == 6)
    {
        printf("Saturday");
    }
    else if(week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}



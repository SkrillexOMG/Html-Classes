#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter a letter:");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a' :
    case 'A' :
        printf("VOWEL");
        break;

    case 'e' :
    case 'E' :
        printf("VOWEL");
        break;

    case 'i' :
    case 'I' :
        printf("VOWEL");
        break;

    case 'o' :
    case 'O' :
        printf("VOWEL");
        break;

    case 'u' :
    case 'U' :
        printf("VOWEL");
        break;

        default :
        printf("CONSONANT");
    }


    switch(ch)
    {
    case 'a' :
    case 'A' :

    case 'e' :
    case 'E' :

    case 'i' :
    case 'I' :

    case 'o' :
    case 'O' :

    case 'u' :
    case 'U' :
        printf("VOWEL");
        break;

        default :
        printf("CONSONANT");
    }

    getch();
}

#include <stdio.h>

void main()
{
    char ch;
    printf("Enter an Alphabet : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Alphabet is a vowel!");
        break;
    default:
        printf("Alphabet is a consonant!");
    }
}
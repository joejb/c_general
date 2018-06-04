#include <stdio.h>

void main(void)
{
    /* code */

    char letter, another_letter;

    letter = 'a';
    another_letter = 'Z';

    printf("a = %d\n", letter);
    printf("Z = %d\n", another_letter);

    letter = letter + 1;
    another_letter = another_letter - 1;

    printf("%c = %d\n", letter, letter);
    printf("%c = %d\n", another_letter, another_letter);
}

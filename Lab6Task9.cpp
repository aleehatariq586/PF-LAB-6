#include <stdio.h>
int main()
{
    char str[100], temp;
    int i, length = 0;
    int vowels = 0, consonants = 0;
    int palindrome = 1;

    printf("Enter a word: ");
    scanf("%99s", str);

    printf("Original Word = %s\n", str);

    while (str[length] != '\0')
    {
        length++;
    }

    printf("Length = %d\n", length);

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
        }
    }

    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    printf("Reversed Word = %s\n", str);
    if (palindrome == 1)
    {
        printf("Palindrome Word\n");
    }
    else
    {
        printf("Not a Palindrome Word\n");
    }
    for (i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);
}

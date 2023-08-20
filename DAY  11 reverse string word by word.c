/*
reverse string word by word
*/
// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void reverseString(char word[])
{
    int len = strlen(word);
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }

    int wordStart = 0;
    for (int i = 0; i <= len; i++)
    {
        if (word[i] == ' ' || word[i] == '\0')
        {
            int wordEnd = i - 1;
            while (wordStart < wordEnd)
            {
                char temp = word[wordStart];
                word[wordStart] = word[wordEnd];
                word[wordEnd] = temp;
                wordStart++;
                wordEnd--;
            }
            wordStart = i + 1;
        }
    }
    printf("Reverse: %s", word);
}

int main()
{
    char word[100];
    printf("Enter string: ");
    fgets(word, sizeof(word), stdin);

    // Remove the newline character from the string
    word[strcspn(word, "\n")] = '\0';

    reverseString(word);

    return 0;
}

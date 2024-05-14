#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    char string[10001];
    for (int i = 0; i < t; i++)
    {
        fgets(string, sizeof(string), stdin);
        int smallLetter = 0, capitalLetter = 0, digit = 0;
        for (int j = 0; j < strlen(string); j++)
        {
            char character = string[j];
            if (character >= 'a' && character <= 'z')
            {
                smallLetter++;
            }
            else if (character >= 'A' && character <= 'Z')
            {
                capitalLetter++;
            }
            else if (character >= '0' && character <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capitalLetter, smallLetter, digit);
    }

    return 0;
}
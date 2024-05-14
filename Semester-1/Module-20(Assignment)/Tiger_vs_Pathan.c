#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char str[n + 1];
        scanf("%s", str);
        int tCount = 0;
        int pCount = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'T')
            {
                tCount++;
            }
            else if (str[i] == 'P')
            {
                pCount++;
            }
        };
        if (tCount > pCount)
        {
            printf("Tiger\n");
        }
        else if (tCount < pCount)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}
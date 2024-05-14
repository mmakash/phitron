#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int line = (n+1) / 2 + 5;
    int star = 1;
    int space = line - 1;
    for (int i = 0; i < line; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star = star + 2;
        space--;
        printf("\n");
    }
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < ((line*2) - 1 - n) / 2; k++)
        {
            printf(" ");
        }
        for (int k = 0; k < n; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
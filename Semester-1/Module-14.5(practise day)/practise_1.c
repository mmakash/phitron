#include <stdio.h>

void myFunc(int n)
{
    int k = 1;
    int s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        };
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k++;
        s--;
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    myFunc(n);
    return 0;
}
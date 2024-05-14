#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int countTwo = 0;
    int countThree = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            countTwo++;
        }
        else if (a[i] % 3 == 0)
        {
            countThree++;
        }
        else if (a[i] == 0 && a[i] == 0)
        {
            countTwo++;
        }
        
    }
    printf("%d %d", countTwo, countThree);

    return 0;
}
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int a,b,c,m;
        scanf("%lld", &m);
        scanf("%lld %lld %lld", &a, &b, &c);
        long long int multiple = a * b * c;
        if (multiple == 0)
        {
            printf("-1\n");
        }
        else
        {
            long long int d = m / multiple;
            if (m % multiple == 0)
            {
                printf("%lld\n", d);
            }
            else
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}
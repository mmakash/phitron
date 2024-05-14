#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    };
    int primary_diagonal = 0;
    int secondary_diagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                primary_diagonal += a[i][j];
            }
            else if (i+j == n -1)
            {
                secondary_diagonal += a[i][j];
            }
            
             
        }
        
    }
    int diff = primary_diagonal - secondary_diagonal;
    printf("%d\n",abs(diff));
    return 0;
}
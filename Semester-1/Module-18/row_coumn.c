#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int a[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    };
    // int e;
    // scanf("%d", &e);
    // for (int i = 0; i < column; i++)
    // {
    //     printf("%d ", a[e][i]);
    // }
    int e;
    scanf("%d",&e);
    for (int i = 0; i < row; i++)
    {
        printf("%d ",a[i][e]);
    }
    

    return 0;
}
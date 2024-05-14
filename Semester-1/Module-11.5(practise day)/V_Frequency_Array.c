#include<stdio.h>

int main(){
    int n;
    int m;
    scanf("%d %d",&n,&m);
    if (m<=0)
    {
        return 1;
    }
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int count[m+1] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = a[i];
        if (value>=0&&value<=m)
        {
            count[value]++;
        }
        
    }
    for (int i = 0; i <= m; i++)
    {
        printf("%d\n",count[i]);
    }
    
    
    return 0;
}
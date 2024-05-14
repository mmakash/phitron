#include<stdio.h>

long long fun(long long int a[],int n,int i){
    
    if (i==n)
    {
        return 0;
    }
    long long int sum = fun(a,n,i+1);
    sum = sum + a[i];
    return sum;
    
    
};
int main(){
    int n;
    scanf("%d",&n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int sum = fun(a,n,0);
    printf("%lld\n",sum);
    return 0;
}
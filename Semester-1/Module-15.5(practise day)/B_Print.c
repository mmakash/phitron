#include<stdio.h>

void printArr(int n){
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    printArr(n);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

void valueChange(int n){
    n = abs(n);
    printf("%d",n);
}

int main(){
    int n;
    scanf("%d",&n);
    valueChange(n);
    return 0;
}
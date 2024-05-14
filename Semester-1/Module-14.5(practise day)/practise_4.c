#include<stdio.h>

int myFunc(char n){
    int x = n - 32;
    return x;
}

int main(){
    char n;
    scanf("%c", &n);
    int answer = myFunc(n);
    printf("%c",answer);
    return 0;
}
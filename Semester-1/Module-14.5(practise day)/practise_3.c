#include<stdio.h>

char myFunc(char n){
    return n;
}

int main(){
    char n;
    scanf("%c", &n);
    int answer = myFunc(n);
    printf("%d",answer);
    return 0;
}
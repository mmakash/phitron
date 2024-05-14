#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char s[1000001];
    scanf("%s",s);
    int sum = 0;
    for(int i = 0; i < n; i++){
        int value = s[i] - 48;
        sum = sum + value;
    }
    printf("%d\n",sum);
    return 0;
}
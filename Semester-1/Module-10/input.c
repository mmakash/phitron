#include<stdio.h>
#include<string.h>

int main(){
    char a[15];
    fgets(a,sizeof(a)/sizeof(char),stdin);
    printf("%s\n",a);
    printf("%d",strlen(a));
    return 0;
}
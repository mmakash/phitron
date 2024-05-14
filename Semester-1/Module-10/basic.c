#include<stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    char ch[a+5];
    getchar();
    fgets(ch,sizeof(ch)/sizeof(char),stdin);
 
    scanf("%d",&b);
    getchar();
    char ch1[b+5];
    fgets(ch1,sizeof(ch1)/sizeof(char),stdin);

    printf("%s %s",ch,ch1);    
    return 0;
}
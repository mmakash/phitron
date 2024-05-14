#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        char s[100];
        scanf("%s",s);
        int sLength = strlen(s);
        if(sLength <= 10){
        printf("%s\n",s);
        }
        else{
            int ans = sLength - 2;
            printf("%c%d%c\n",s[0],ans,s[sLength-1]);
        }
    }
    return 0;
}
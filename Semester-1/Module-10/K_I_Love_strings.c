#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        char s[60],t[60];
        scanf("%s %s",s,t);
        int slen = strlen(s);
        int tlen = strlen(t);
        int max;
        if(slen >= tlen){
            max = slen;
        }
        else{
            max = tlen;
        }
        for(int i = 0; i < max; i++){
            if(i < slen) printf("%c",s[i]);
            if(i < tlen) printf("%c",t[i]);
        }
        printf("\n");
    }
    return 0;
}
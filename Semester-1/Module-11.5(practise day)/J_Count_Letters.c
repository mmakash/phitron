#include<stdio.h>

int main(){
    char c;
    int countA[26] = {0};
    while (scanf("%c",&c) != EOF)
    {
        countA[c-'a']++;
    }
    for(char i = 'a'; i <= 'z';i++){
       if (countA[i-'a'] > 0)
       {
         printf("%c : %d\n",i,countA[i-'a']);
       }
       
    }
    
    return 0;
}
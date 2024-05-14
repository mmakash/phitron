#include<stdio.h>
#include<string.h>

int main(){
    char myString[1001];
    scanf("%s",myString);
    char newString[1001];
    int length = strlen(myString);
    int j = 0;
    for(int i = length - 1; i >= 0; i--){
        newString[j] = myString[i];
        j++;
    }
    int flag = 0;
    for(int i = 0; i < length; i++){
        if(myString[i] != newString[i]){
            printf("NO\n");
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("YES");
    }
    return 0;
}
#include<stdio.h>

int fun(char arr[],int i){
    if(arr[i] == '\0') return 0;
    int length = fun(arr,i+1);
    return length+1;
}

int main(){
    char arr[8] = "helloooo";
    int length = fun(arr,0);
    printf("%d\n",length);
    return 0;
}
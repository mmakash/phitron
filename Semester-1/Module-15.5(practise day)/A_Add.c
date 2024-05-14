#include<stdio.h>
void sumOfTwo(int x,int y){
    int answer = x + y;
    printf("%d",answer);
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    sumOfTwo(x,y);
    return 0;
}
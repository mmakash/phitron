#include<stdio.h>
#include<string.h>

int main(){
    char x[11],y[11];
    scanf("%s",x);
    scanf("%s",y);
    int xLength = strlen(x);
    int yLength = strlen(y);
    char z[11];
    for(int i = 0; i < xLength; i++){
        z[i] = x[i];
    };
    for(int i = 0; i < yLength; i++){
        z[xLength + i] = y[i];
    };
    z[xLength+yLength] = '\0';
    char temp = x[0];
    x[0] = y[0];
    y[0] = temp;
    printf("%d %d\n",xLength,yLength);
    printf("%s\n",z);
    printf("%s %s",x,y);
    
    return 0;
}
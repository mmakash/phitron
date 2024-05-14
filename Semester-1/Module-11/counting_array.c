#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int countA[7] = {0};
    for(int i = 0; i < n; i++){
        int value = a[i];
        countA[value]++;
    };
    for(int i = 0; i < 7; i++){
        printf("%d - %d\n",i,countA[i]);
    }
    return 0;
}
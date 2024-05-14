#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int firstArr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&firstArr[i]);
    }
    int m;
    scanf("%d",&m);
    int secondArr[m];
    for(int i = 0; i < m; i++){
        scanf("%d",&secondArr[i]);
    }
    int ans[n+m];
    for(int i = 0; i < n; i++){
        ans[i] = firstArr[i];
    }
    int i = n;
    for(int j = 0; j < m; j++){
        ans[i] = secondArr[j];
        i++;
    }
    for(int i = 0; i < n + m; i++){
        printf("%d ",ans[i]);
    }
    return 0;
}
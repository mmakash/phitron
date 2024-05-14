#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int M1,M2,D1;
        scanf("%d %d %d",&M1,&M2,&D1);
        int addedMan = M1 + M2;
        int D2 = (M1 * D1) / addedMan;
        int answer = D1 - D2;
        printf("%d\n",answer);
    }
    
    return 0;
}
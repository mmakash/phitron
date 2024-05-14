#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    // insert krar jonno ekhane 1 index beshi input newa hoyeche 
    int ar[n+1];
    for(int i = 0; i < n; i++){
        scanf("%d",&ar[i]);
    }
    // ekhane kon position e insert kora hocche r koto value ta newa hoyeche
    int pos,val;
    scanf("%d %d",&pos,&val);
    // ei loop ti er maddhome array er upor theke nich dik ana hoyeche..

    // reverse korar shomoi amra n - 1 tkeke kori but ekhane jehetu 
    //     1 index barano hoyeche tai sudhu n rakha hoyeche
    for(int i = n; i >= pos + 1; i--){
        
        ar[i] = ar[i-1];
    }
    ar[pos] = val;
    for(int i = 0; i <= n; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}
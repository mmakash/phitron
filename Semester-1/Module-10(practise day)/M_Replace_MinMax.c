#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int max_value_index = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > a[max_value_index]){
            max_value_index = i;
        }
    } 
    int min_value_index = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < a[min_value_index]){
            min_value_index = i;
        }
    }
    int temp = a[max_value_index];
    a[max_value_index] = a[min_value_index];
    a[min_value_index] = temp;
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
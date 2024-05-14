#include<stdio.h>

void func(int *p){
    // pass by reference
    *p = 200;
}

int main(){
    int x = 10;
    func(&x);
    printf("%d",x);
    return 0;
}
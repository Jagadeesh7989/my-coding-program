#include <stdio.h>
int main() {
    int f,n;
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial of %d is:%d",n,f);
}
int fact(int n){
    if(n==1)
    return 1;
    else 
    return n*fact(n-1);
}

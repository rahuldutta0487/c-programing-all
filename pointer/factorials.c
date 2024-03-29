#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
        
    return fact;
}
int main(){
    int n;
    printf("enter the value for n: ");
    scanf("%d",&n);
    int k=factorial(n);
    printf("%d",k);
     
    return 0;
}
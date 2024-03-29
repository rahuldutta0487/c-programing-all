#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combinational(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("enter the value of n: \n");
    scanf("%d",&n);
    int r;
    printf("ENTER the value of r: \n");
    scanf("%d",&r);
    int k=combinational(n,r);
    printf("%d",k);
    return 0;
}
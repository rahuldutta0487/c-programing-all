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

}
int main(){
    int n;
    printf("enter n: \n");
    scanf("%d",&n);
    // int r;
    // printf("enter r: \n");
    // scanf("%d",&r);
    // int nfact=factorial(n);
    // int rfact=factorial(r);
    // int nrfact=factorial(n-r);
    // int ncr=combinational(n,r);
    // printf("%d",k);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int icj=combinational(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}
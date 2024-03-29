#include<stdio.h>
int main(){
    int n,m,i,j,d,k;
    printf("enter the number od rpws: ");
    scanf("%d",&n);
    printf("enter the number of colums: ");
    scanf("%d",&m);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}
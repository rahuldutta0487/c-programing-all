#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    printf("enter the numberof colums: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=m;k++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows :");
    scanf("%d",&n);
    int m;
    printf("enter number of colums :");
    scanf("%d",&m);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=m-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
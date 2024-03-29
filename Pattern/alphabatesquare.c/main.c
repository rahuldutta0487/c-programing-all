#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows :");
    scanf("%d",&n);
    int m;
    printf("enter number of colums :");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=m;j++){
            int d=a+64;
            char ch=(char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
}


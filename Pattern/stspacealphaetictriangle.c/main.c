#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    printf("enter the numberof colums: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}

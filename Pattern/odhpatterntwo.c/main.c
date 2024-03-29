#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of lines: ");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    int a[7]={1,2,3,4,3,2,1};
    for(int i=0;i<7;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("%d",j);
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=nst;j>=1;j--){
            printf("%d",j);
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    
    
}
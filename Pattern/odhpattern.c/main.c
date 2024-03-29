
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of lines: ");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int f=1;f<=2*n+1;f++){
        printf("%d",f);
        
    }
    printf("\n");
    for(int k=1;k<=n;k++){
        int a=1;
        for(int i=1;i<=nst;i++){
        printf("%d",a);
        a++;
        }
    for(int j=1;j<=nsp;j++){
        printf(" ");
        a++;
        }
    for(int i=1;i<=nst;i++){
        printf("%d",a);
        a++;
       } 
       nst--;
       nsp+=2;
       printf("\n");
    } 

    return 0;
}


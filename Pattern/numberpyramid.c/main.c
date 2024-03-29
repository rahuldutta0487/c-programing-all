#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows :");
    scanf("%d",&n);
    int m;
    printf("enter number of colums :");
    scanf("%d",&m);
    
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
            
        }
        for(int k=1;k<=i;k++){
            
            printf("%d",k);
        }
        for(int f=1;f<=i-1;f++){
           
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
}


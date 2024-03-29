#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows :");
    scanf("%d",&n);
    int m;
    printf("enter number of colums :");
    scanf("%d",&m);
    
    for(int i=1;i<=n;i++){
        int a=i-1;// last e 1 kore komiye anar jonno
        for(int j=1;j<=n-i;j++){//spaces er jonno
            printf(" ");
            
        }
        for(int k=1;k<=i;k++){//number triangle er jonno
            char ch=(char)(k+64);
            printf("%c",ch);
        }
        for(int f=1;f<=i-1;f++){// end with 1 triangle er jonno
            char ch=(char)(a+64);
            printf("%c",ch);
            a--;
        }
        printf("\n");
    }
}


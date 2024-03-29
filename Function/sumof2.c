#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a,b;
    printf("enter 1st number: \n");
    scanf("%d",&a);
    printf("enter 2nd number: \n");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("sum of 2number is %d",sum);
    return 0;
}
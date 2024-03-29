#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a=2;
    // printf("enter a value for a: \n");
    // scanf("%d",a);
    int b=3;
    // printf("enter a value for b: \n");
    // scanf("%d",b);

    swap(&a,&b);
    printf("a: %d\n",a);
    printf("b: %d\n",b);

    return 0;
}
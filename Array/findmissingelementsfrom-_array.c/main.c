#include <stdio.h>

int main()
{
    int arr[99];
    int sum=0,missingelement;
    for(int i=0;i<99;i++){
       arr[i]=i+1; 
       sum=sum+arr[i];
    }
  
    int sum2=(100*(100+1))/2;
    missingelement=sum2-sum;
    printf("%d ",missingelement);
    return 0;
}

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int mal=1;
    for(int i=0;i<5;i++){
        mal=mal*arr[i];
    }
     printf("%d",mal);
    return 0;
}

#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,2,1};
    int brr[5],i;
    for(int i=0;i<5;i++){
        brr[i]=arr[4-i];
    }
    if(arr[i]=brr[i]){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

    return 0;
}



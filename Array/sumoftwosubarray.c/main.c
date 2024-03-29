
#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int crr[5]={7,4,5,9,8};
    int brr[3],sumbrr=0;
    int drr[3],sumdrr=0,total=0;
    for(int i=2;i<5;i++){
        brr[i]=arr[i];
    }

    for(int i=2;i<5;i++){
        sumbrr=sumbrr+brr[i];
    }
    for(int i=2;i<5;i++){
        drr[i]=crr[i];
    }

    for(int i=2;i<5;i++){
        sumdrr=sumdrr+drr[i];
    } 
    total=sumbrr+sumdrr;

    printf("%d\n",sumbrr);
    printf("%d\n",sumdrr);
    printf("%d\n",total);
    return 0;
}


#include <stdio.h>
void reverse(int arr[],int si, int ei){
    for(int i=si,j=ei;i<j;i++,j--){
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
    return;
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr,2,5);
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
//int main()
//{
  //  int arr[5]={1,2,3,4,5};
    //reverse(arr);
    //for(int i=0;i<5;i++){
     //   printf("%d ",arr[4-i]);
    //}

    //return 0;
//}


//repeaetedly swap two adjucent elements if they are in wrong order(L>R)
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    

    return 0;
}
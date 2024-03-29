#include<stdio.h>
void greet(){
    printf("Good Morning\n");
    printf("How are You\n");
    return;
}
int main(){
    for(int i=1;i<=3;i++){
        greet();
    }
    return 0;
}
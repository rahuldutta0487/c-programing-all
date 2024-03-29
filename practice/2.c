#include<stdio.h>
int summ(char ch[100]){
    int sum=0;
    for(int i=0;ch[i]!='\0';i++){
        if((ch[i]>='0') && (ch[i]<='9')){
            sum=sum+(ch[i]-'0');
        }
    }
    return sum;
}
int main(){
    char ch[400]="hello54367world";
    int result=summ(ch);
    printf("%d",result);

    return 0;
}
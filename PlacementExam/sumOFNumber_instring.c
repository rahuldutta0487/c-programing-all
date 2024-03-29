#include<stdio.h>
#include<string.h>
int sum(char ch[]){
    int sum=0;
    for(int i=0;ch[i]!='\0';i++){
        if((ch[i]>='0') && (ch[i]<='9')){
            sum=sum+(ch[i]-'0');
        }
    }
    return sum;
}
int main(){
    char ch[48]="hello1234world54";
    int result=sum(ch);
    printf("%d",result);
    return 0;
}
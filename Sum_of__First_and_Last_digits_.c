#include<stdio.h>
int main(){
    int num,first,last;
    scanf("%d",&num);
    last=num%10;
    for(first=num;first>=10;first=first/10);
    int sum=first+last;
    printf("%d",sum);
}
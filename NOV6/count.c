#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    while(n!=0){
         n=n/10;
         c++;
    }
    printf("%d",c);
    return 0;
}
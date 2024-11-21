//program to swap the values of two variables with a 3rd variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf(" a = %d   b = %d\n",a,b);
    return 0;
}
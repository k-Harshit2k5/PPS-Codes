//program to use relational operators.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    printf("\n");
    
    printf("condition\t boolean value\n");
    printf("a>b      \t %d\n",a>b);
    printf("a>=b     \t %d\n",a>=b);
    printf("a<b      \t %d\n",a<b);
    printf("a<=b     \t %d\n",a<=b);
    printf("a==b     \t %d\n",a==b);
    printf("a!=b     \t %d\n",a!=b);
    return 0;
}
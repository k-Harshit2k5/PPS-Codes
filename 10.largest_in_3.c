//program to find largest between 3 numbers.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    printf("enter c = ");
    scanf("%d",&c);

    a>b? c>a? printf("greatest = %d",c):printf("greatest = %d",a):c>b? printf("greatest = %d",c):printf("greatest = %d",b);
}
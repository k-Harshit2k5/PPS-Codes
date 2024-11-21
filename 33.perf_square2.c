//program to check if a number is perfect square.
#include<stdio.h>
#include<math.h>
int main(){
    int n,r;
    printf("Enter n : ");
    scanf("%d",&n);
    r=sqrt(n);
    r*r==n?printf("perfect square"):printf("not a perfect square");
}
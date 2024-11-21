//program to know the type of triangle using length of the sides.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter length of the sides\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c){
        printf("equilateral triangle");
    }
    else if(a==b || a==c || b==c){
        printf("isosceles  triangle");
    }
    else{
        printf("scalene triangle");
    }
    return 0;
}
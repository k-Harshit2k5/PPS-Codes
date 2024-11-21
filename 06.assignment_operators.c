//program to use assignment operators.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a = ");
    scanf("%d",&a);
    b=a;
    printf("b=a : %d\n",b);
    b+=a;
    printf("b+=a : %d\n",b);
    b*=a;
    printf("b*=a : %d\n",b);
    b/=a;
    printf("b/=a : %d\n",b);
    b-=a;
    printf("b-=a : %d\n",b);
    b%=a;
    printf("b%%=a : %d\n",b);
    return 0;
}
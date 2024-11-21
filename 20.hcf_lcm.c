//program to calculate LCM and HCF by brute force.
#include<stdio.h>
int main(){
    int a,b,hcf,lcm;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(int i=a;i>0;i--){
        if(b%i==0 && a%i==0){
            hcf=i;
            break;
        }
    }
    lcm=(a*b)/hcf;
    printf("LCM = %d and HCF = %d",lcm,hcf);
    return 0;
}
//program to know if a number is a prime number or a composit number;
#include<stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    if(n==1){
        printf("neither prime nor composite");
        return 0;
    }
    int i=2;
    while(i<=n/2){
        if(n%i==0){
            break;
        }
        i++;
    }
    (i==(n/2)+1)?printf("prime"):printf("composite");
    return 0;
}
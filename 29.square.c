//print square pattern from '*'.
#include<stdio.h>
int main(){
    int n;
    printf("enter side : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
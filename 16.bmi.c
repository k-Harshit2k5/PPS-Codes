//program to calculate BMI of a person and comment on his/her health.
#include<stdio.h>
int main(){
    float h,w,bmi;
    printf("Enter height(m) and weight(Kg)\n");
    scanf("%f %f",&h,&w);
    bmi=w/(h*h);
    printf("BMI = %f\n",bmi);
    if(bmi<18.5){
        printf("Underweight");
    }
    else if(bmi>=18.5 && bmi<24.9){
        printf("Normal weight");
    }
    else if(bmi>=24.9 && bmi<29.9){
        printf("Overweight");
    }
    else{
        printf("Obese");
    }
    return 0;
}
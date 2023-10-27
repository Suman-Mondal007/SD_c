//Wroite a program in c to calculate the discounted amount by taking price of product as an input from the user .if the discount is greater than 10% and less than 50%,18% gst will be added to the total bill.if it is the more than 50% and less than 100% then 2 % gst will be applicable.
#include<stdio.h>
int main(){
    float price ,discount,discounted_price,total_price;
    printf("Enter the price of the product:\n");
    scanf("%f",&price);
    printf("Enter the discount in percentage:\n");
    scanf("%f",&discount);
    discounted_price=price-(price*discount*0.01);
    if(discount>=10 & discount<=50){
        float gst = discounted_price*0.18;
        total_price=discounted_price+gst;
        printf("Discounted price:%f\n",total_price);
        
    }else if(discount>=50 & discount<+100){
        float gst =discounted_price*0.02;
        total_price=discounted_price+gst;
        printf("Discounted price:%f \n", total_price);
        
    }
}

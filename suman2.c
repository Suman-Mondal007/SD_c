//5 students number and their sum and avg in array
#include<stdio.h>
void main(){
    int marks[5],i;
    float sum=0,avg;
    printf("Enter the marks of 5 student:\n");

    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);

    }
    for(i=0;i<5;i++){
        sum =sum+marks[i];

    }
    avg=sum/5;
    printf("\nsum=%f",sum);
    printf("\navg=%f",avg);
}

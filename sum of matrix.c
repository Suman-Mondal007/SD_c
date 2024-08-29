#include<stdio.h>
int main(){
    float a,b,sum,sub,div,mul;
    char choice;
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    printf("Enter the value of b:\n");
    scanf("%f",&b);
    printf("Enter the choice (+,-,*,/):\n");
    scanf(" %c",&choice);
       switch (choice){
           case '+':
             sum=a+b;
             printf("The sum of two number is:%f",sum);
             break;
           case'-':
            sub=a-b;
            printf("The sub of two number is:%f",sub);
            break;
           case '*':
               mul=a*b;
               printf("The mul of two number is:%f",mul);
               break;
           case'/':
                   div = a / b;
                   printf("The div of two number is:%f", div);
              break;
       }
       printf("\n");
  }
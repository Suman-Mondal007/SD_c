//calculator using switch case 
#include<stdio.h>
int main(){
    int a,b,sum,sub,mul,div;
    char operator;
    printf("Enter choice:\n");
    scanf("%c",&operator);
    printf("Enter two values:\n");
    scanf("%d%d",&a,&b);

    switch(operator)
    {
        case '+':
        sum=a+b;
        printf("The sum is:\n%d",sum);
        break;
        case '-':
        sub=a-b;
        printf("The sub is :\n%d",sub);
        break;
        case '*':
        mul=a*b;
        printf("The mul is:\n%d",mul);
        break;
        case '/':
        div=a/b;
        printf("The division is :\n%d",div);
        break;
    }
}

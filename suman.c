#include<stdio.h>
void main(){
    int a[5],i;
    printf( "Enter the elements:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<5;i++){
        printf("\n array elements at index %d is:%d ",i,a[i]);
    }
}

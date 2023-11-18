//sum of matrix
//sum of matrix
#include<stdio.h>
int main(){
    int a[3][3],i,j,sum_row,sum_col;
    printf("Enter the matrics:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        sum_row=sum_col=0;
        for(j=0;j<3;j++){
            sum_row=sum_row+a[i][j];
            sum_col=sum_col+a[j][i];

        }
        printf("\n sum_row=%d,sum_col=%d",sum_row,sum_col);
    }
}

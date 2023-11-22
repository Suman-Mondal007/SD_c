#include <stdio.h>
int main() {
    struct product_details {
        char product_name[20];
        int product_price;
        long int product_id;
    };
    int i;


    struct product_details sd;
    for(i=1;i<=5;i++) {
        printf("%d) Enter the product_name:\n", i);
        gets(sd.product_name);
        printf("Enter the product_price:\n", i);
        scanf("%d", &sd.product_price);
        printf("Enter the product_id:\n", i);
        scanf("%ld", &sd.product_id);
        getchar();
    }
    int option;
    switch option {
        case '1':
        printf("The product_name:\n");
        puts(sd.product_name);
        printf(product("price:%d \n",sd.product_price);
        printf("product_id:%ld \n",sd.product_id);
    }
}

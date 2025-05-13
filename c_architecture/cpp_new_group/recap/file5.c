#include <stdio.h>
#include <stdlib.h>

typedef enum {
    ELECTRONICS,
    FOOD,
    CLOTHING
} Category;
typedef struct {
    char name[20];
    Category Category;
    float price;
}Product;

int main() {
    Product products[3];
    
    for(int i = 0; i < 3; ++i) {
        printf("Enter product Name %d: ",i + 1);
        scanf("%s",products[i].name);
        printf("Enter product category, \n0 -> Electronics, \n1 -> Food, \n2 -> Clothing\n");
        scanf("%u", &products[i].Category);
        printf("Enter producrt price: ");
        scanf("%f",&products[i].price);
    }

    printf("Category_Food:\n");
    for(int i = 0; i < 3; ++i) {
        if(products[i].Category == FOOD) {
            printf("Name: %s, \nPrice: %3.f\n",products[i].name,products[i].price);
        }
    }
}
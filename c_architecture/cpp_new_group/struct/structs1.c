#include <stdio.h>
typedef struct
{
    char brand[20];
    char model[20];
    int year;
    float price;
} Car;

int main() {
    int size = 3;
    const int size1 = 5;
    Car cars[size1];

    for(int i = 0; i < size; ++i) {
        printf("Enter the car data:\n");
        printf("Brand: ");
        scanf("%s",cars[i].brand);
        printf("Model: ");
        scanf("%s",cars[i].model);
        printf("Year of issue: ");
        scanf("%d",&cars[i].year);
        printf("Price: ");
        scanf("%f",&cars[i].price);
        printf("\n");
    }

    int count = 0;
   do {
    printf("If you want to see your cars iformations enter: 1\n");
    printf("If you want to add new car inormation enter: 2\n");
    printf("And if you want to exit enter: 3\n");
    scanf("%d",&count);
        switch (count)
        {
            case 1:
                if(size == size1) {
                    for(int i = 0; i < size1; ++i) {
                        printf("Brand: %s\n", cars[i].brand);
                        printf("Model: %s\n", cars[i].model);
                        printf("Year of issue: %d\n", cars[i].year);
                        printf("Price: %.2f\n", cars[i].price);
                        printf("\n\n");
                    }
                    break;
                }
                for(int i = 0; i < size; ++i) {
                    printf("Brand: %s\n", cars[i].brand);
                    printf("Model: %s\n", cars[i].model);
                    printf("Year of issue: %d\n", cars[i].year);
                    printf("Price: %.2f\n", cars[i].price);
                    printf("\n\n");
                }
                break;
            
            case 2:
                if(size == size1) {
                    printf("You cant add cars!!\n");
                    break;
                }
                printf("\nYou can add 2 cars\n");

                for(int i = size; i < size1; ++i) {
                    printf("Enter the car data:\n");
                    printf("Brand: ");
                    scanf("%s",cars[i].brand);
                    printf("Model: ");
                    scanf("%s",cars[i].model);
                    printf("Year of issue: ");
                    scanf("%d",&cars[i].year);
                    printf("Price: ");
                    scanf("%f",&cars[i].price);
                    printf("\n");
                    size++;
                }

                break;

            case 3:
                printf("Exit\n");
                
            default:
                break;
        }
   } while(count != 3);

   return 0;
}

#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;

}point;

float foo(){
    point ob1;
    point ob2;

    printf("Enter your object 1: \nx & y:");
    scanf("%f %f", &ob1.x, &ob1.y);
    printf("Enter your object 2: \nx & y:");
    scanf("%f %f", &ob2.x, &ob2.y);

    printf("%f", sqrt(pow((ob2.x - ob1.x), 2) + pow((ob2.y - ob1.y), 2)));
}
int main(){
    foo();
    return 0;
}
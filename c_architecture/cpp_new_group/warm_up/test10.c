#include <stdio.h>

void temp(double far) {
    double cel = ((far - 32)/(9/5));

    printf("Celsius is: %.1lf \n",cel);
}

int main() {

    double far = 0;
    double cel = 0;

    printf("Enter Temperature in Fahrenheit:\n");
    scanf("%lf",&far);

    cel = ((far - 32)/(9/5));

    printf("Celsius is: %.1lf \n",cel);

    return 0;
}
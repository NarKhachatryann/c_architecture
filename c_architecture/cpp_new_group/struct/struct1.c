#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

int dateDifference(const Date* day1,const Date* day2) {
    int day = day2 -> day - day1 -> day;
    int month = day2 -> month - day1 -> month;
    int year = day2 -> year - day1 -> year;

    day += (month*31) + (year*365);

    return day;
}

int main() {

    Date day1;
    Date day2;

    printf("Enter first date: DD MM YYYY:");
    scanf("%d %d %d",&day1.day,&day1.month,&day1.year);
    printf("Enter second date: DD MM YYYY:");
    scanf("%d %d %d",&day2.day,&day2.month,&day2.year);

    printf("Days are: %d\n",dateDifference(&day1,&day2));

    return 0;
}

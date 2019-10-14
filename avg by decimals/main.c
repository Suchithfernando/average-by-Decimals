#include <stdio.h>
#include <stdlib.h>

int main()
{
    float no1,no2,avg;
    printf("Enter a number ");
    scanf("%f",&no1);
    printf("Enter a number");
    scanf("%f",&no2);
    avg=(no1+no2)/2;
    printf("The average is %.3f\n",avg);
    return 0;
}

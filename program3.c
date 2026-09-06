#include <stdio.h>

int main()
{
    float celsius, farenheit;
    printf("enter temperature in celsius:");
    scanf("%f",&celsius);
    
    farenheit=(celsius *9 / 5) + 32;
    printf("temperature in farenheit = %2f" ,farenheit);
    
    return 0;
    
}

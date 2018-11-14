#include <stdio.h>
#include <math.h>

int main()
{
    float tempCeusius, tempFahrenheit;

    printf("Informe a temperatura (em Celcius): ");
    scanf("%f", &tempCeusius);

    tempFahrenheit = tempCeusius * 9/5 + 32;

    printf("A temperatura em Fahrenheit eh: %.2f", tempFahrenheit);

    return 0;
}


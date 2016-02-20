#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for fahr = 0, 20, ..., 300 */

float convert(float celsius);

/* test conversion function */
int main()
{
    float celsius;

    printf("Celsius to Fahrenheit Table\n");
    printf("---------------------------\n");
    for (celsius = 0; celsius <= 300; celsius += 20)
        printf("%3.0f %6.2f\n", celsius, convert(celsius));
    return 0;
}

/* convert: convert temperature in celsius to fahrenheit */
float convert(float celsius)
{
    return (9.0/5.0) * celsius + 32;
}

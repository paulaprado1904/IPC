#include <stdio.h>
#include<math.h>

int main (){

    int celsius;
    float kelvin, fahrenh;

    do{
        kelvin = celsius + 273.15;
        fahrenh = (9 * celsius / 5) + 32;
        printf ("Celsius = %d | Kelvin = %f | Fahrenheit = %f\n", celsius, kelvin, fahrenh);
        celsius ++;
    } while(celsius < 200);

    return 0;
}
#include <stdio.h>

int main()
{

float celsius = 0;
float fahr = 0;
        float lower = 0;
        float upper = 300;
        float step = 20;

    fahr = lower;
    printf("\t\b\b\b\b\b˚Fahrenheit\t\t˚Celsius\n");
    while (fahr <= upper)
        
        {
        celsius = 5*(fahr-32)/9;
            printf("\t\t%3.0f\t\t\t%3.1f\n", fahr, celsius);
        fahr = fahr + step;
        }
    
return 0;

}

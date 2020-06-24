#include <stdio.h>

int main ()
{

float cels, fahr;
int lower = 0;
int upper = 1000;
int step = 20;
cels = lower;
    
    while (cels <= upper)
    
    {
        fahr = (1.8 * cels)+32;
        printf("\t\t\t%3.0f\t\t\t%.1f\n",cels,fahr);
        cels = cels + step;
    }
    
return 0;

}

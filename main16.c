#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 30

int main(void)

{
    
    float cels = 0;
    float fahr;
    fahr = UPPER;
    
    while (fahr >= LOWER)
    
    {
        cels = (5.0 / 9.0)*(fahr - 32);
        printf("\t\t\t%3.1f\t\t\t%3.1f\n\t",fahr, cels);
        fahr = fahr - STEP;
    }
    
    return 3;
}

#include <stdio.h>

int main()

{
   int fahr = 0.0;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("\t\t\t%3.1d\t\t\t%3.2f\n",fahr,(5.0/9)*(fahr-32));
    return 3;
}

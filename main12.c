//
//  main.c
//  format specifiers
//
//  Created by Ben Stocks on 5/23/20.
//  Copyright © 2020 C. All rights reserved.
//

#include <stdio.h>

int main()

{
    
    double recWidth = 32.2;
    double recHeighth = 15.3;
    double recPerim = 0;
    double recArea = 0;
    
    recPerim = 2.0 * (recHeighth + recWidth);
    recArea = (recHeighth * recWidth);
    
    printf("Rectangle Width = %.5f\n", recWidth);
    printf("Rectangle Height = %.5f\n", recHeighth);
    printf("Computed Perimeter = %.5f\n", recPerim);
    printf("Computed Area = %.5f\n", recArea);
    
    printf("Width, Height, Perimeter, and Area = %.1f, %.1f, %.1f, %.1f\n\n\n", recWidth, recHeighth, recPerim, recArea);
    
    return 0;

}

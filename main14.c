//
//  main.c
//  C tutorial 1
//
//  Created by Ben Stocks on 5/12/20.
//  Copyright © 2020 tutorial. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    char color [20];
    char pluralNoun[20];;
    char celebrityA[20];
    char celebrityB[20];
    
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityA, celebrityB);
    
    
    printf("Roses are %s \n", color);
    printf("%s are blue \n", pluralNoun);
    printf("I love %s %s \n", celebrityA, celebrityB);
    return 0;
    
}

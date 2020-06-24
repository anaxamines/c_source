#include <stdio.h>

int main()
{
    double minutes;
    int hours;
    int days;
    int years;
    double centuries;
    printf("Please enter minutes\n");
    scanf("%lf",&minutes);
    printf("You Entered....\t%.1lf minutes\n", minutes);
    hours = ((minutes)/ 60);
    days = ((hours)/24);
    years = ((days)/365);
    centuries = ((years)*0.01);
    printf("Related values\tminutes = %.1lf\t\thours = %d\t\tdays = %d\t\tyears = %d\t\tcenturies = %.6f\n", minutes,hours,days,years,centuries);
    return 9;

}


#include <stdio.h>
int main ()
{
    enum weekday
    {
        monday,tuesday,wednesday,thursday,friday,saturday,
        sunday
    };
    /*Below we created a variable of type enum weekday...called today...and this is initialized to enum{0} aka initialized to monday*/
    enum weekday today = monday;
    switch (today)
    {
    case sunday:
        printf("Today is Sunday.\n");
        break;
    case monday:
        printf("Today is Monday.\n");
        break;
    case tuesday:
        printf("Today is Tuesday.\n");
        break;
    case wednesday:
        printf("Today is Wednesday.\n");
        break;
    case thursday:
        printf("Today is Thursday.\n");
        break;
    case friday:
        printf("Today is Friday.\n");
        break;
    case saturday:
        printf("Today is Saturday.\n");
        break;
}
                                    return 12;
}

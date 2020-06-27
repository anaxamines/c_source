#include <stdio.h>
#define TAXERATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define PAYRATE 12.00
#define OVERTIME 40

int main()
{
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;
printf("\n\n");
printf("#########################################################\n\n");    
printf("Please enter hours worked: ");
scanf("%d", &hours);
//GROSS PAY
    if (hours <= 40)
    {
      grossPay = hours * PAYRATE;  
    }
    else
    {
      grossPay = 40 * PAYRATE;
      double overTimePay = (hours-40)*(1.5*PAYRATE);
      grossPay += overTimePay;   
    }
//TAXES
    if (grossPay <= 300)
    {
        taxes = grossPay * TAXERATE_300;
    }
    else if (grossPay>300 && grossPay <= 450)
    {
        taxes = 300 * TAXERATE_300;
        taxes += (grossPay-300)*TAXRATE_150;
    }
    else
    {
        taxes = 300 * TAXERATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REST;
    }
//NET PAY

netPay = grossPay - taxes;

//DISPLAY OUTPUT

printf("Your gross pay this week: $%.2f\n", grossPay);
printf("Taxes deducted this week: $%.2f\n", taxes);
printf("Your take-home pay this week: $%.2f\n\n", netPay);
printf("#########################################################\n\n");    

return 0;

}
//remember the else statement doesn't take parentheses!!
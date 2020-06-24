#include <stdio.h>

int main()
{

    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    
    
    enum Company google = GOOGLE;
    enum Company facebook = FACEBOOK;
    enum Company xerox = XEROX;
    enum Company ebay = EBAY;
    enum Company yahoo = YAHOO;
    enum Company microsoft = MICROSOFT;

    printf("The Number of Google is: %d\n\n", google);
    printf("The Number of Facebook is: %d\n\n", facebook);
    printf("The Number of Xerox is: %d\n\n", xerox);
    printf("The Number of Ebay is: %d\n\n", ebay);
    printf("The Number of Yahoo is: %d\n\n", yahoo);
    printf("The Number of Microsoft is: %d\n\n\n\n", microsoft);
  
    return 0;
}

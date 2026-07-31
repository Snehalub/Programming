#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   Accept single digit number from user and print it into word
//
////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iDigit = 0;

    if (iNo < 0 || iNo > 9)
    {
        printf("Invalid Number");
        return;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        printf("Zero");

        if(iDigit == 1)
        printf("One");

        else if(iDigit ==2)
        printf("Two");

         else if(iDigit ==3)
        printf("Three");

         else if(iDigit ==4)
        printf("Four");

         else if(iDigit ==5)
        printf("Five");

         else if(iDigit ==6)
        printf("Six");

         else if(iDigit ==7)
        printf("Seven");

         else if(iDigit ==8)
        printf("Eight");

         else if(iDigit ==9)
        printf("Nine");

        iNo = iNo / 10;


    } 
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

 
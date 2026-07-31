#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : MultipleDisplay
// Description :   Accept number from user and print first 5 multiples
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

int MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1 ;iCnt <= 5; iCnt++)
    {
      printf("%d\t",iCnt * iNo);
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

 
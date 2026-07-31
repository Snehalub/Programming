#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : OddDisplay
// Description :   Accept number from user and print odd numbers 
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ;iCnt <= iNo; iCnt = iCnt + 2)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}

 
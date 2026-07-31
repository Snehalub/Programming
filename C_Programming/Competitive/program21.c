#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : Pattern
// Description :   Accept number from user and print that number of $ and * on screen
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

 
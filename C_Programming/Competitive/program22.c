#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : Display
// Description :   Accept number from user and print numbers till that number
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

 
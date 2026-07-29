#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : Display
// Description :  Accept a number from user and display first number in second number 
//                times
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void Display(int iNo , int iFrequency)
{
    int iCnt = 0;
    //write Updater

    for(iCnt = 1;iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    printf("Enter Frequency :\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}


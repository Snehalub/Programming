#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : Display
// Description :   Accept number from user and print that number of "*" on screen
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    //Write Updater
    while(iCnt < iNo)
    {
        printf("*\t");
        iCnt++;
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

 
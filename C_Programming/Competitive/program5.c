#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : Accept
// Description :   Accept number from user and print that number of "*" on screen
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void Accept(int iNo)
    {
       int iCnt = 0;
       
       for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
        printf("*\t");
       }
    }


int main()
{
   int iValue = 0;
   iValue = 5;

   Accept(iValue);

    return 0;
}

 
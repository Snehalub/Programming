#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : PrintEven
// Description :   Accept number from user and print that number of even numbers on screen
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

   if(iNo <= 0)
   {
    return  ;
   }
   for(iCnt = 1; iCnt <= iNo; iCnt++ )
   {
      printf("%d\t",iCnt*2);

    }
   
}

int main()
{
   int iValue = 0;

   printf("Enter Number :\n");
   scanf("%d",&iValue);

   PrintEven(iValue);

    return 0;
}

 
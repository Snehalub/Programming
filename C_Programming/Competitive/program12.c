#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : DisplayFactor
// Description :   Accept number from user and print even factor of that number
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int iCnt = 0;

   if(iNo <= 0)
   {
    iNo = -iNo;
   }
   for(iCnt = 1; iCnt < iNo; iCnt++ )
   
    {
        if((iNo % iCnt)== 0)
        {
            printf("%d\t",iCnt);
        }

    }

   
}

int main()
{
   int iValue = 0;

   printf("Enter Number :\n");
   scanf("%d",&iValue);

   DisplayFactor(iValue);

    return 0;
}

 
#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : NonFact
// Description :   Accept number from user and display its all non factors
// Date :          25/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

int NonFact(int iNo)
{
    int iCnt = 0;
    

   if(iNo <= 0)
   {
    iNo = -iNo;
   }
   for(iCnt = 1; iCnt < iNo; iCnt++ )
   
    {
        if((iNo % iCnt)!= 0)
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

   NonFact(iValue);

    return 0;
}

 
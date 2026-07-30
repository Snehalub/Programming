#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : FactRev
// Description :   Accept number from user and print reverse factor of that number
// Date :          25/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

int FactRev(int iNo)
{
    int iCnt = 0;
    

   if(iNo <= 0)
   {
    iNo = -iNo;
   }
   for(iCnt = iNo-1; iCnt >= 1; iCnt-- )
   
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

   FactRev(iValue);

    return 0;
}

 
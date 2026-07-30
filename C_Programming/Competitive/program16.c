#include<stdio.h> 

/////////////////////////////////////////////////////////
//
// Function name : MultFact
// Description :   Accept number from user and print multiplication of factors
// Date :          25/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

   if(iNo <= 0)
   {
    iNo = -iNo;
   }
   for(iCnt = 1; iCnt <= (iNo/2); iCnt++ )
   
    {
        if((iNo % iCnt)== 0)
        {
            iMul = iMul * iCnt;

            
        }

    }
        return iMul;

   
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number :\n");
   scanf("%d",&iValue);

   iRet = MultFact(iValue);

   printf("%d",iRet);

    return 0;
}

 
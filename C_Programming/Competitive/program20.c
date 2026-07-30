#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : FactDiff
// Description :   Accept number from user and return diference between summation of all its
//                 fators and non factors 
// Date :          25/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iDiff = 0;
    
    

   if(iNo <= 0)
   {
    iNo = -iNo;
   }
   for(iCnt = 1; iCnt < iNo; iCnt++ )
   
    {
        if((iNo % iCnt)== 0) 
        {
           
            iSum= iSum + iCnt;
        }
        else
        {
            iDiff = iDiff + iCnt;
        }

    } return (iSum - iDiff);
        

   
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number :\n");
   scanf("%d",&iValue);

   iRet = FactDiff(iValue);

   printf("%d",iRet);

    return 0;
}

 
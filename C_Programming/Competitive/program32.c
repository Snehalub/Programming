#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   Accept amount in US dollers and connvert it into indian currency
//
////////////////////////////////////////////////////////


int DollarToINR(int iNo)
{
    int iCnt = 1;
    int iMul = 1;
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
      iMul = iCnt * 70;   
    }
    return iMul;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number of USD :\n");
   scanf("%dd",&iValue);

   iRet = DollarToINR(iValue);

   printf("Value in INR is %d",iRet);

    return 0;
}

 
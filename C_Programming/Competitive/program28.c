#include<stdio.h>  

/////////////////////////////////////////////////////////
// 
// Description :   Find factorial of given number
//
////////////////////////////////////////////////////////


int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact*iCnt;

    }
    return iFact;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number :\n");
   scanf("%d",&iValue);

   printf("You entered : %d\n", iValue);

   iRet = Factorial(iValue);

   printf("Factorial of a number is %d",iRet);


    return 0;
}

 
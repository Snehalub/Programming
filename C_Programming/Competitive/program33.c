#include<stdio.h> 

/////////////////////////////////////////////////////////
// 
// Description :   Accept number from user and print its even factorial
//
////////////////////////////////////////////////////////


int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        if((iCnt % 2)== 0)
        {
            iFact = iFact*iCnt;

        }

    }
    return iFact;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number :\n");
   scanf("%d",&iValue);

   iRet = EvenFactorial(iValue);

   printf("Multiplication of Even Factorial of a number is %d",iRet);


    return 0;
}

 
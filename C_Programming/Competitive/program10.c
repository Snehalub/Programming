#include<stdio.h>
#define True 1
#define False 0

/////////////////////////////////////////////////////////
//
// Function name : CheckEvenS
// Description :   accept number from user and check if it is Even or Odd
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

typedef int Bool;

Bool CheckEven(int iNo)
{
    int iCnt = 0;
   if (iCnt % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
}

int main()
{
    int iValue = 0;
    Bool bRet = False;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    return
}



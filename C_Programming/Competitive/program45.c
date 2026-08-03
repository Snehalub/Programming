#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   Accept number from user and find the difference between even and odd digits
//
////////////////////////////////////////////////////////


int CountDiff(int iNo)
{
    int iEven = 0;
    int iOdd = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
            iDigit = iNo % 10;

            if((iDigit % 2 )== 0)
            {
                iEven;
            }
            else
            {
                iOdd;
            }
            iNo = iNo / 10;

    }return (iEven - iOdd);
}
    

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number: \n");
   scanf("%d",&iValue);

   iRet = CountDiff(iValue);

   printf("%d",iRet);
   
    return 0;
}

 
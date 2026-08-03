#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   Accept number from user and print multiplication of its Even digits
//
////////////////////////////////////////////////////////


int MultDigits(int iNo)
{
    int iMul = 1;
    int iDigit = 0;

    while(iNo != 0)
    {
            iDigit = iNo % 10;

            if((iDigit % 2 )== 0)
            {
                iMul = iMul * iDigit;
            }
            iNo = iNo / 10;

        }return iMul;
    }
    

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number: \n");
   scanf("%d",&iValue);

   iRet = MultDigits(iValue);

   printf("%d",iRet);
   
    return 0;
}

 
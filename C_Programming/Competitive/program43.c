#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   Accept number from user and count the number between 3 to 7
//
////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
            iDigit = iNo % 10;

            if((iDigit > 3 )&&( iDigit < 7))
            {
                iCount++;
            }
            iNo = iNo / 10; 

        }return iCount;
    }

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number: \n");
   scanf("%d",&iValue);

   iRet = CountRange(iValue);

   printf("%d",iRet);
   
    return 0;
}

 
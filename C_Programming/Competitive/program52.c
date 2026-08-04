#include<stdio.h> 

/////////////////////////////////////////////////////////
// 
// Description :   Accept number from user and chech whether it contains zero or not
//
////////////////////////////////////////////////////////


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
            iDigit = iNo % 10;

            if(iDigit == 0)
        {
            return TRUE;
        }

            iNo = iNo / 10;

        }
         return FALSE;
    }
    

int main()
{
   int iValue = 0;
   BOOL bRet = FALSE;
   
   printf("Enter Number: \n");
   scanf("%d",&iValue);

  bRet = ChkZero(iValue);

  if(bRet == FALSE)
  {
    printf("It does not Contains Zero");
  }
  else
  {
    printf("It Contains Zero");
  }
 
    return 0;
}

 
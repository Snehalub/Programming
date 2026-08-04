#include<stdio.h>  

/////////////////////////////////////////////////////////
// 
// Description :   Accept number from user and and count the digits less than 6
//
////////////////////////////////////////////////////////


int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
            iDigit = iNo % 10;

            if(iDigit < 6)
            {
                iCount++;
            }
        
            iNo = iNo / 10;

    }
    return iCount;
}
    
int main()
{
   int iValue = 0;
   int iRet = 0;
   
   printf("Enter Number: \n");
   scanf("%d",&iValue);

   iRet = Count(iValue);

   printf("%d",iRet);
    return 0;
}

 
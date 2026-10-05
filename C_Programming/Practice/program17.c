//accept number from user and check if it is Even or Odd
#include<stdio.h>
#include<stdbool.h>   //to use boolean in c

bool CheckEvenOdd(int iNo) 
{
    

     if((iNo % 2) == 0)
     {
        return true;
     }
     else
     {
        return false;
     }

   
}
int main()
{

    int iValue = 0;
    bool bRet = false;
    

    printf("Enter Number to check whether it is Even or Odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet )
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d is Odd\n",iValue);
    }

    
    return 0;
}
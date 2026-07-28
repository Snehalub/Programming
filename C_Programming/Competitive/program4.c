#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : Check
// Description :   Check whether the given number is divisible by 5 or not
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

typedef int Bool;
#define True 1
#define False 0

 Bool Check(int iNo)
 {
    if((iNo % 5)== 0)
    {
        return True;
    }
    else
    {
        return False;
    }

 }


int main()
{
   int iValue = 0;
   Bool bRet = False;

   printf("Enter number : \n");
   scanf("%d",&iValue);

   bRet = Check(iValue);

   if(bRet == True)
   {
    printf("Divisible by 5");
   }
   else
   {
    printf("Not Divisible by 5");
   }

    return 0;
}


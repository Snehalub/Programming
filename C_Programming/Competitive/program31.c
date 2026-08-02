#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   Accept number from user and display pattern
//
////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt  = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
       
    }
     for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("#\t");   
    }
}

int main()
{
   int iValue = 0;

   printf("Enter Number: \n");
   scanf("%d",&iValue);

   Display(iValue);
   
    return 0;
}

 
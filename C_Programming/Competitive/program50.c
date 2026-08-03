#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :  Accept the number from user and display the digits in the reverse order
//
////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
   for(iCnt = iEnd; iCnt >= iStart;iCnt--)
   {
    printf("%d\t",iCnt);
   }   
}    

int main()
{
    int iValue1 = 0;
    int iValue2  = 0;
    
    printf("Starting Point :\n");
    scanf("%d",&iValue1);

    printf("Ending Point :\n");
    scanf("%d",&iValue2);


    RangeDisplayRev(iValue1,iValue2);

    return 0;
}

 
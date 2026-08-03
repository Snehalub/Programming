#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   Print the sum of the digit between the range enter by user
//
////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if(iStart < 0 || iEnd < 0)
    {
        printf("Invalid Range");
    }
    
   for(iCnt = iStart; iCnt <= iEnd; iCnt++)
   {
    iSum = iSum + iCnt;
    
   }
    return iSum;
    
}   

int main()
{
    int iValue1 = 0;
    int iValue2  = 0;
    int iRet = 0;
    
    printf("Starting Point :\n");
    scanf("%d",&iValue1);

    printf("Ending Point :\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Sum is %d\n", iRet);

    return 0;
}

 
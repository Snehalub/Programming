#include<stdio.h> 

/////////////////////////////////////////////////////////
// 
// Description : Display even digits between the range enter by user 
//
////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    
   for(iCnt = iEnd;iCnt >= iStart; iCnt--)
   {
    if(iCnt % 2 ==0)
    {
    printf("%d\t",iCnt);
    }
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


    RangeDisplayEven(iValue1,iValue2);

    return 0;
}

 
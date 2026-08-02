#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   Convert value from KM to Meter
//
////////////////////////////////////////////////////////


int KMToMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Distance :\n");
   scanf("%d",&iValue);

   iRet = KMToMeter(iValue);

   printf("Value in Meter is %d",iRet);

    return 0;
}

 
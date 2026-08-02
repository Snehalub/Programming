#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   Convert area from square feet to square meter
//
////////////////////////////////////////////////////////


double SquareMeter(float fSquareFeet)
{
    double fMeter = 0.0;
    fMeter = fSquareFeet * 0.0929;
    
    return fMeter;
}

int main()
{
  float fValue= 0;
  double dRet = 0.0;

   printf("Enter area in square feet :\n");
   scanf("%f",&fValue);

   dRet = SquareMeter(fValue);

   printf("Value in Square meter is %f",dRet);

    return 0;
}

 
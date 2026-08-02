#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   Convert temperature from fahrenheit to celcius
//
////////////////////////////////////////////////////////

double FhToCs(float fTemp)
{
    double fConvertCs = 0.0;
    fConvertCs = ((fTemp - 32)*(5.0/9.0));

    return fConvertCs;
}

int main()
{
  float fValue = 0.0f;
  double dRet = 0.0;

   printf("Enter Temperature :\n");
   scanf("%f",&fValue);

   dRet = FhToCs(fValue);

   printf("Value in Celcius is %f",dRet);

    return 0;
}

 
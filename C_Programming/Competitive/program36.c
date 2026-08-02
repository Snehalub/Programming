#include<stdio.h>  

/////////////////////////////////////////////////////////
// 
// Description :   Find the area of circle
//
////////////////////////////////////////////////////////


double CirclrArea(float fRadius)
{
    double fArea = 0.0;

        fArea = 3.14*fRadius*fRadius;
    
    return fArea;
}

int main()
{
   float fValue = 0.0f;
   double dRet = 0.0;

   printf("Enter Radius :\n");
   scanf("%f",&fValue);

   dRet = CirclrArea(fValue);

   printf("Area of circle is %f",dRet);


    return 0;
}

 
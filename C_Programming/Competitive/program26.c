#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : Number
// Description :   Accept number from user print small if its less than 50,print 
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void Number(int iNo)
{
    
    if(iNo < 50)
    {
        printf("Small");
    }
    else if( iNo < 100)
    {
        printf("Medium");
    }
    else 
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;
   
    printf("Enter number :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}

 
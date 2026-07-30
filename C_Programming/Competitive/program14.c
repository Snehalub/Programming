#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : DisplayConvert
// Description :   Accept Character from user and convert case of that character
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if( CValue >= 'A' && CValue <= 'Z' )
    {
        printf("%c", CValue + 32);
    }
    else if( CValue >= 'a' && CValue <= 'z' )
    {
        printf("%c", CValue - 32);
    }

   
}

int main()
{
    char cValue = 0;

   printf("Enter Character :\n");
   scanf("%c",&cValue);

   DisplayConvert(cValue);

    return 0;
}

 
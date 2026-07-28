#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : Display
// Description :   print 5 to 1 number on screen
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void Display()
    {
        int i = 0;
         i = 5;

        while(i >= 1)
        {
            printf("%d\t",i);
            i--;
        }
    }


int main()
{
   Display();

    return 0;
}


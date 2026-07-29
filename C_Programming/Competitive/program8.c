#include<stdio.h>

/////////////////////////////////////////////////////////
//
// Function name : Display
// Description :   Accept number from user and print "Hello" if it is less than 10 
//                 otherwise print "Demo"
// Date :          24/05/2006
// Author :        Snehal Umesh Balsaraf
//
////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}    

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


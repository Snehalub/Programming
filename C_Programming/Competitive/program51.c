#include<stdio.h> 

/////////////////////////////////////////////////////////
// 
// Description :   Accept number from user and print the even digits in reverse order
//
////////////////////////////////////////////////////////


void DisplayDigits(int iNo)
{
    int iDigit = 0;
    
    while(iNo != 0)
    {
            iDigit = iNo % 10;

            if((iDigit % 2 )== 0)
            {
                printf("%d\t", iDigit);
            }
            iNo = iNo / 10;

        }
    } 
    
int main()
{
   int iValue = 0;
   
   printf("Enter Number: \n");
   scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}

 
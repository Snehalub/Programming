#include<stdio.h> 
/////////////////////////////////////////////////////////
// 
// Description :   Accept number from user and display table
//
////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo == 0)
        {
            printf("Invalid Number");    
        }
          
    for(iCnt = 1;iCnt <= 10; iCnt++)
    { 
       printf("%d * %d = %d\n", iNo, iCnt, iNo * iCnt);      
    }
}    

int main()
{
    int iValue = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}

 
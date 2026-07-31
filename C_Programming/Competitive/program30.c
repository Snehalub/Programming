#include<stdio.h>

/////////////////////////////////////////////////////////
// 
// Description :   ccept number from user and display table int reverse
//
////////////////////////////////////////////////////////


void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo == 0)
        {
            printf("Invalid Number");
            
        }
        
    
    for(iCnt = 10;iCnt >= 1; iCnt--)
    {
     
       printf("%d * %d = %d\n", iNo, iCnt, iNo * iCnt);
          
    }
}    

int main()
{
    int iValue = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}

 
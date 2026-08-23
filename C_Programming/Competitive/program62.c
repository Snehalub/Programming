#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
// 
// Description :  Accept N numbers from user and return difference between frequency of even numbers and odd numbers
//
////////////////////////////////////////////////////////


int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenCount = 0;
    int iOddCount = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
           iEvenCount++;
        }
        else
        {
            iOddCount++;
        }
        
    }     return (iEvenCount - iOddCount);

}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int*p = NULL;
    int iRet = 0;
    
    printf("Enter Number of Elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
     
    iRet = Frequency(p, iSize);
    
    printf("Difference between even frequency and odd frequency is: %d\n",iRet);

    free(p);

    return 0;
}
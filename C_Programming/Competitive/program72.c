#include<stdio.h>
#include<stdlib.h>  

/////////////////////////////////////////////////////////
// 
// Description : Accept N numbers from user and return smallest number
//
////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
           iMin = Arr[iCnt];
        }
    } 
    return iMin; 
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int*p = NULL;
    int iRet = 0;
    int iValue = 0;
    
    printf("Enter Number of Elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

     printf("Enter elements :\n",iSize);

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        printf("Enter elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
     
    iRet = Minimum(p, iSize);
    
    printf("Smallest number is %d\n",iRet);

    free(p);

    return 0;
}
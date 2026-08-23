#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
// 
// Description : Accept N numbers from user and return frequency of even numbers
//
////////////////////////////////////////////////////////


int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
           iCount++;
        }
        
    }     return iCount;

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
     
    iRet = CountEven(p, iSize);
    
    printf("Even elements are: %d\n",iRet);

    free(p);

    return 0;
}
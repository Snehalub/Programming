#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
// 
// Description : Accept N numbers and range from user and display all elements from that range
//
////////////////////////////////////////////////////////

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }    
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int*p = NULL;
    int iRet = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter Number of Elements :\n");
    scanf("%d",&iSize);

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point :\n");
    scanf("%d",&iValue2);

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
     
    iRet = Range(p, iSize, iValue1, iValue2);

    printf("%d\n",iRet);
    
    free(p);

    return 0;
}
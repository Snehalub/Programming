#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
// 
// Description : Accept N numbers from user and accept one another number as NO,return frequency of NO from it
//
////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % iNo == 0)
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
    int iValue = 0;
    
    printf("Enter Number of Elements :\n");
    scanf("%d",&iSize);

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter elements :\n",iSize);

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
     
    iRet = Frequency(p, iSize, iValue);
    
    printf("Frequency of given element is : %d\n",iRet);

    free(p);

    return 0;
}
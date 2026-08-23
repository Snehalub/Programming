#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////
// 
// Description :  Accept N numbers from user and check whether that number contain 11 or not
//
////////////////////////////////////////////////////////

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;
   
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    bool bRet = false;

    printf("Enter the number of Elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    bRet = LinearSearch(Brr,iLength);
    if(bRet == true)
    {
        printf("Element is Present\n");
    }
    else
    {
        printf("Element is not Present\n");
    }
    
    free(Brr);


    return 0;
}
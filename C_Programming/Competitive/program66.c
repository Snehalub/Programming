#include<stdio.h>   
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////
// 
// Description : Accept N numbers from user and accept one another number as NO,check whether NO is present or not
//
////////////////////////////////////////////////////////

bool Check(int Arr[], int iSize , int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
   
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % iNo == 0)
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
    int iValue = 0;

    printf("Enter the number of Elements : \n");
    scanf("%d",&iLength);

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    bRet = Check(Brr,iLength, iValue);
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
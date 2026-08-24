#include<stdio.h>
#include<stdlib.h>  

/////////////////////////////////////////////////////////
// 
// Description : Accept N numbers from user and display summation of digits of each number
//
////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
    int iDigit = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iNo = Arr[iCnt];
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;

        }
        printf("%d\n",iSum);
    }

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
     
    DigitsSum(p, iSize);

    free(p);

    return 0;
}
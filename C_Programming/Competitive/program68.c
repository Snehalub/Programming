#include<stdio.h>
#include<stdlib.h>   //pending

/////////////////////////////////////////////////////////
// 
// Description : Accept N numbers from user and accept one another number as NO and return index of it
//
////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] % iNo == 0)
        {
           return iCnt;
        }
    }    
    return -1; 

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
        printf("Enter elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
     
    iRet = FirstOcc(p, iSize, iValue);
    
    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurrence of number is %d",iRet);
    }

    free(p);

    return 0;
}
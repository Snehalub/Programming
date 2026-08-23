#include<stdio.h>
#include<stdlib.h>  

/////////////////////////////////////////////////////////
// 
// Description : Accept N numbers from user and return product of odd numbers
//
////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;
    int iProduct = 1;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
           iProduct = iProduct*Arr[iCnt];
           iCount++;
        }
    }    

    if(iCount == 0)
    {
        return 0;      
    }

    return iProduct;
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

     printf("Enter elements :\n",iSize);

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        printf("Enter elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
     
    iRet = Product(p, iSize);
    
    printf("Product is %d\n",iRet);

    free(p);

    return 0;
}
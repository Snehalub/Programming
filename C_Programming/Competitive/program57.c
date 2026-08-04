#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
// 
// Description : Accept N numbers from user and display all such elements that are divisible by 5
//
////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    
   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
           printf("%d\n",Arr[iCnt]);
        }     
    }     
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int*p = NULL;
    
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
     printf("Elements that are divisible by 5 are :\n",p[iCnt]);

    Display(p, iSize);
    
    free(p);

    return 0;
}
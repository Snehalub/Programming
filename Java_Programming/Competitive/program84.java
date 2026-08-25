/////////////////////////////////////////////////////////
// 
// Description : Display the sum of even and odd digit from the number
//
////////////////////////////////////////////////////////

class Logic
{
    void SumEvenOddDigits(int num)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;

        for(iCnt = 0; iCnt < num; iCnt++)
        {
            while(num != 0)
            {
                iDigit = num % 10;
                if(iDigit % 2 == 0)
                {
                    iCnt++;
                    iEvenSum = iEvenSum + iDigit;
                }
                else
                {
                    iCnt++;
                    iOddSum = iOddSum + iDigit;
                }
                num = num/10;
                
            }    
        }
        System.out.println("Even digit sum is : "+iEvenSum);
        System.out.println("Odd digit sum is : "+iOddSum);
        
    }
}

class program84
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.SumEvenOddDigits(123456);
    }
}
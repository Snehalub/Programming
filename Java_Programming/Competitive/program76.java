/////////////////////////////////////////////////////////
// 
// Description : Find the sum of digits of a number
//
////////////////////////////////////////////////////////

class Logic
{
    void SumOfDigits(int num)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt < num; iCnt++)
        {
            while(num != 0)
            {
                iDigit = num % 10;
                iSum = iSum + iDigit;
                num = num / 10;
            }
            System.out.println("Summation of Digit is : "+iSum);

        }
    }
}

class program76
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.SumOfDigits(1234);
    }
}
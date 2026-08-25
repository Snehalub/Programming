//pending
/////////////////////////////////////////////////////////
// 
// Description : Check whether the number is palindrome or not  
//
////////////////////////////////////////////////////////

class Logic
{
    void CheckPalindrome(int num)
    {
        int iDigit = 0;
        int iTemp = 0;
        int iRev = 0;

        iTemp = num;
        
            while(num != 0)
            {
                iDigit = num % 10;
                iRev = (iRev * 10) + iDigit;
                num = num/10;
            }

            if(iRev == iTemp)
            {
                System.out.println("Number is palindrome");
            }
            else
            {
                System.out.println("Number is not palindrome");
            }
    }    
    
}

class program77
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckPalindrome(12321);
    }
}
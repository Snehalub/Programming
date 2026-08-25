/////////////////////////////////////////////////////////
// 
// Description : Check whether the number is prime or not
//
////////////////////////////////////////////////////////

class Logic
{
    void CheckPrime(int num)
    {
        int i = 0;

        if(num <= 1)
        {
            System.out.println("Number is not prime");
            return;
        }
        
            for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                System.out.println("Number is not prime");
                return;
            }
            else
            {
                System.out.println("Number is prime");
                return;
            }
        }
    }
}

class program81
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckPrime(11);
    }
}
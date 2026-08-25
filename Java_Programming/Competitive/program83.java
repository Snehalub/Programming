/////////////////////////////////////////////////////////
// 
// Description : Print odd numbers till the given number
//
////////////////////////////////////////////////////////

class Logic
{
    void PrintOddNumbers(int num)
    {
        int i = 0;
        for (i = 1; i <= num; i++)
        {
            {
                System.out.println(i);
                i++;
            }
        }
    }
}

class program83
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.PrintOddNumbers(20);
    }
}
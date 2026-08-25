/////////////////////////////////////////////////////////
// 
// Description : Check whether the number is positive, negative or zero
//
////////////////////////////////////////////////////////

class Logic
{
    void checkSign(int num)
    {
        if(num < 0)
        {
            System.out.println("Number is negative");
        }
        else if(num > 0)
        {
            System.out.println("Number is positive");
        }
        else
        {
            System.out.println("Number is zero");
        }

    }
}
class program85
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}
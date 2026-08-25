/////////////////////////////////////////////////////////
// 
// Description : Find the minimum of three numbers
//
////////////////////////////////////////////////////////

class Logic
{
    void FindMin(int a, int b, int c)
    {
        if(a < b && a < c)
        {
            System.out.println("mimimum number is :" +a);
        }
        else if(b < a && b < c)
        {
            System.out.println("mimimum number is : "+b);
        }
        else
        {
            System.out.println("mimimum number is : "+c);

        }
    }
}

class program79
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.FindMin(3,7,2);
    }
}
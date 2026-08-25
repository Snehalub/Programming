/////////////////////////////////////////////////////////
// 
// Description : Print even numbers till the given number
//
////////////////////////////////////////////////////////

class Logic
{
void PrintEvenNumbers(int num)
{
    int i = 0;

    for(i = 0; i <= num; i++)
    {
    {
        System.out.println(i);
        i++;
    }

    }
}
}

class program82
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.PrintEvenNumbers(20);
    }
}
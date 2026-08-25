/////////////////////////////////////////////////////////
// 
// Description : Print the multiplication table of a number
//
////////////////////////////////////////////////////////

class Logic
{
    void PrintTable(int num)
    {
       int iCnt = 1;
       int iMul = 1;

       for(iCnt = 1; iCnt <= 10; iCnt++)
       {
        iMul = num * iCnt;
        System.out.println(num + "*" + iCnt + "=" +iMul);
       }
    }
}

class program80
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.PrintTable(5);
    }
}
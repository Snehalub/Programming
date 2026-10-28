function CheckEven(no)
{
   return(no % 2 == 0);
}
function main()
{
   let Value = 10;
   let bRet = false;

   bRet = CheckEven(Value);

   if(bRet)
   {
    console.log(`${Value} is even number`);
   }
   else
   {
    console.log(`${Value} is odd number`);
   }

}

main()
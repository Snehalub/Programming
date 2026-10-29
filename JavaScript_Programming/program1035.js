
function CheckPerfect(no)
{
    let i = 0;
    let sum = 0;
   for(i = 1; i <= no/2; i++)
   {
    if(no % i == 0)
    {
        sum = sum + i;
    }
   }
   return(no == sum);
}
function main()
{
    let bRet = false;

    bRet = CheckPerfect(28);

    if(bRet == true)
    {
        console.log("It is perfect number");
    }
    else
    {
        console.log("It is not a perfect number");
    }
}

main()
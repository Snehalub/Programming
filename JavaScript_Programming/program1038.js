function SumDigits(no)
{
    let iSum = 0;
    let iDigit = 0;

    while(no != 0)
    {
        iDigit = no % 10;
        iSum = iSum + iDigit;
        no = Math.trunc(no / 10);
    }
    return iSum;
}
function main()
{
    let iRet = 0;

    iRet = SumDigits(257);

    console.log("Summation of digits :",iRet);
}

main()
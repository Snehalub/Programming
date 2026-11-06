class Arithmatic
{
    constructor(A,B)
    {
        this.no1 = A;
        this.no2 = B;
    }
    Addition()
    {
        return this.no1 + this.no2
    }

    Substraction()
    {
        return this.no1 - this.no2
    }
}
function main()
{
    let aobj = new Arithmatic(11,10);

    console.log(aobj.Addition())
    console.log(aobj.Substraction())
}

main()
#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{ 
    public:

    int *Arr;
    int iSize;

    ArrayX()  //Default constructor
    {

    }

    ArrayX(int X) //Parameterized constructor
    {

    }

};
int main()
{
    ArrayX aobj1;    //Default
    ArrayX aobj2(5); //parameterized

    cout<<sizeof(aobj1)<<endl;  
    cout<<sizeof(aobj2)<<endl;  
    
    

    return 0;
}
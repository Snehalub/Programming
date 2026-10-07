#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{ 
    public:

    int *Arr;
    int iSize;

    ArrayX(int X) //Parameterized constructor
    {
        cout<<"Inside Constructor\n";

        iSize = X;               //Characteristics initialization
        Arr = new int[iSize];    //Resoure allocation
    }
    ~ArrayX()                     //Destructor
    {
        cout<<"Inside Destructor\n";

        delete []Arr;            //Resoure deallocation
    }

};
int main()
{
    ArrayX aobj(5);   
    
    return 0;
}
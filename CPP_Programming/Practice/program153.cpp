#include<iostream>
using namespace std;

class ArrayX
{ 
    public:

    int *Arr;
    int iSize;

};
int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj)<<endl;  //size = 16bytes due to padding
    

    return 0;
}
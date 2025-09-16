#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    cout<<"Bitwise AND operator: "<<(a&b)<<endl;
    cout<<"Bitwise OR operator: "<<(a|b)<<endl;
    cout<<"Bitwise XOR operator: "<<(a^b)<<endl;
    cout<<"Bitwise NOT operator: "<<(~a)<<endl;
    cout<<"Left Shift operator: "<<(a<<1)<<endl;
    cout<<"Right Shift operator: "<<(a>>1)<<endl;
    cout<<(17>>1)<<endl;
    cout<<(19>>1)<<endl;
    cout<<(21>>1)<<endl;
    cout<<(23>>1)<<endl;
    cout<<(17<<1)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
    cout<<(23<<3)<<endl;

    int i=7;
    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
    
}

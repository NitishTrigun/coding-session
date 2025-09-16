#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        int nextnumber=a+b;
        a=b;
        b=nextnumber;

    }
}
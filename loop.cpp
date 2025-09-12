#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a=1;
    while(a<=n){
        sum=sum+a;
        a++;  
    } 
    cout<<sum<<" ";
    return 0;
}
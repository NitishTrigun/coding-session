#include<iostream>
using namespace std;
int main()
{
    //for loop example
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum is: "<<sum<<endl;

}
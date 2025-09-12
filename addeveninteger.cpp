#include<iostream>
using namespace std;
int main()
{
    // Add Even Integers from 1 to n
    int n,sum=0;
    cin>>n; 
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<sum<<" ";
    // Add Odd Integers from 1 to n
    /*int n,sum=0;
    cin>>n; 
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }*/
}
#include<iostream>
using namespace std;
int main(){
    int i=0,ans=0;
    int place=1;
    int n;
    cin>>n;
    while(n!=0){
        int bit = n % 10;
        ans = (bit*place) + ans;
        place = place * 2;
        n = n / 10;
        i++;
    }
    cout<<ans<<endl;
}
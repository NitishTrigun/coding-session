#include<iostream>
#include<math.h>
using namespace std;
void dummy(int n){
    n++;
    cout<<"Inside function: "<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"Outside function: "<<n<<endl;
}
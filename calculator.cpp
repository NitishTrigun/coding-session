#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter another number:";
    cin>>b;
    cout<<"Enter the operation:";
    cin>>op;

    switch(op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        case '%':
            cout<<a%b;
            break;
        default:
            cout<<"Invalid Operation";
    }
}
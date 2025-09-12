#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if (a>=97&&a<=122){
        cout<<"Lowercase Alphabet";
    }
    else if (a>=65&&a<=90){
        cout<<"Uppercase Alphabet";
    }
    else if (a>=48&&a<=57){
        cout<<"Digit";
    }
    else{
        cout<<"Special Character";
    }
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int total=1330;
    int n;
    cout<<"Enter the rupees of notes that wants:";
    cin>>n;

    switch(n){
        case 100:
            cout<<"You will get "<<total/n<<" notes of 100"<<endl;
            total=total%n;
        case 50:
            cout<<"You will get "<<total/n<<" notes of 50"<<endl;
            total=total%n;
        case 20:
            cout<<"You will get "<<total/n<<" notes of 20"<<endl;
            total=total%n;
        case 10:
            cout<<"You will get "<<total/n<<" notes of 10"<<endl;
            total=total%n;
        case 5:
            cout<<"You will get "<<total/n<<" notes of 5"<<endl;
            total=total%n;
        case 2:
            cout<<"You will get "<<total/n<<" notes of 2"<<endl;
            total=total%n;
        case 1:
            cout<<"You will get "<<total/n<<" notes of 1"<<endl;
            total=total%n;
            break;
        default:
            cout<<"Invalid Input";
    }
}
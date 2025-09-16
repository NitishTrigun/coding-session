#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    bool isNegative = (n < 0);
    unsigned int num = isNegative ? -n : n;  // Take absolute value

    string binary = "";

    while (num != 0) {
        int bit = num & 1;
        binary = char(bit + '0') + binary;
        num = num >> 1;
    }

    if (isNegative) {
        cout << "-" << binary << endl;  // Show a negative sign explicitly
    } else {
        cout << binary << endl;
    }
}

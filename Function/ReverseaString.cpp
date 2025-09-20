#include <iostream>
using namespace std;

void reverseString(string str, int index) {
    if (index < 0) return; // base case
    cout << str[index];
    reverseString(str, index - 1); // recursive call
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    cout << "Reversed: ";
    reverseString(word, word.length() - 1);
    return 0;
}

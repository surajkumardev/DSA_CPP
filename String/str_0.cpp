#include <iostream>
#include <cstring> // for strlen, strcat, etc.
#include <vector>
using namespace std;

int main() {
    char name[] = "Suraj"; // s u r a j \0
    char str1[] = "herljelrj";
    char str2[5] = {'H', 'e', 'l', 'l', '\0'};

    // loop to print the length
    // cout << strlen(name) << endl;

    char strr[10];
    cin >> strr;
    cout << strr << endl;

    cin.ignore(); // clear leftover newline from cin

    char sty[15];
    cin.getline(sty, 15); // match array size
    cout << sty << endl;

    char s1[20] = "hello";
    char s2[30] = "world";
    strcat(s1, s2);
    cout << s1 << endl;
    cout << "Length: " << strlen(s1) << endl;

    return 0;
}

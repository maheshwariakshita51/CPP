#include <iostream>
using namespace std;

int main() {
    string s;
    int flag = 0;

    cout << "Enter a string: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
            s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "String contains vowel";
    else
        cout << "String does not contain vowel";

    return 0;
}

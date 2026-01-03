#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int i = 0;
    while (i * i <= n) {
        if (i * i == n) {
            cout << "It is a perfect square";
            return 0;
        }
        i++;
    }

    cout << "It is not a perfect square";
    return 0;
}
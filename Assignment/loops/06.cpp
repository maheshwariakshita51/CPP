#include <iostream>
using namespace std;

int main() {
    int n, x, s = 0, last, count = 0;

    cout << "Enter n: ";
    cin >> n;
    int temp = n;

    while (temp != 0) {
        last = temp % 10;
        if (last == 0)
            count++;
        else
            break;
        temp /= 10;
    }

    while (n != 0) {
        x = n % 10;
        s = (s * 10) + x;
        n /= 10;
    }

    for (int i = 0; i < count; i++) {
        cout << "0";
    }

    cout << s;
    return 0;
}

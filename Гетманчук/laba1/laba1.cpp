#include <iostream>
using namespace std;
int main() {
    double r, c, s, pi = 3.14;
    cin >> r;
    if (!cin) {
        cout << "eto ne chislo" << endl;
        return 0;
    }
    else {
        c = 2 * pi * r;
        s = pi * r * r;
    }
    cout << "C:" << c << endl;
    cout << "S:" << s;
    return 0;
}

#include <iostream>
#include "cmath"
using namespace std;

float f (float y) {
    return ((y * y) * (cos(y)) + 1);

}

int main() {
    float a, b, x;

    do {
        cout << "inserire estremi" << endl;
        cin >> a;
        cin >> b;
    } while (f(a)*f(b)>=0);

    x = ((a+b)/2);

    if (f(x) == 0) {
        cout << x << endl;
        cout << f(x) << endl;
    } else {
        if (f(a) * f(b) < 0) {
            b = x;

        } else {
            a = x;
        }
    }

    if (abs((b - a) / 2) <= 0.000001) {
        cout << x << endl;
        cout << f(x) << endl;
    } else {
        while (abs((b - a) / 2) >= 0.000001) {
            x = (a + b) / 2;
            cout << x << endl;
            cout << f(x) << endl;
            break;
            }
        }
    return 0;
    }

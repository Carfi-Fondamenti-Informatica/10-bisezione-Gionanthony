#include <iostream>
#include "cmath"
using namespace std;

float f (float y) {
    return ((y * y) * (cos(y)) + 1);

}

int main() {
    float a, b, err, x;

    do {
        cout << "inserire estremi" << endl;
        cin >> a;
        cin >> b;
    } while (f(a)*f(b)>=0);

    do {
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
            err = abs((b - a) / 2);
    }} while (abs(err>=1e-6));

    cout << x << endl;
    cout << f(x) << endl;
    
    return 0;
    }

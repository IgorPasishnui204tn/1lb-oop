#include "Pair.h"
#include <cmath>

bool Pair::Init(double f, double s) {
    if (s < 0) return false;
    first = f;
    second = s;
    return true;
}

void Pair::Read() {
    double f, s;
    do {
        cin >> f >> s;
    } while (s < 0);
    Init(f, s);
}

void Pair::Display() const {
    cout << first << " " << second << endl;
}

Pair Pair::multiply(double k) const {
    double full = first + second;
    double result = full * k;

    Pair t;
    double intPart = floor(result);
    double fracPart = result - intPart;

    t.Init(intPart, fracPart);
    return t;
}

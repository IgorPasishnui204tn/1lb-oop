#pragma once
#include <iostream>
using namespace std;

struct Pair {
    double first;
    double second;

    bool Init(double f, double s);
    void Read();
    void Display() const;
    Pair multiply(double k) const;
};

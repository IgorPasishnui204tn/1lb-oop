#include "Pair.h"
#include <iostream>
using namespace std;

int main() {
    Pair A;
    A.Read();
    double k;
    cin >> k;
    Pair R = A.multiply(k);
    R.Display();
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a, b, c, largest;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    cout << "Largest = " << largest << endl;

    return 0;
}

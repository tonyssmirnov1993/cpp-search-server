#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > y) {
        for (int i = x; i >= y; --i) {
            cout << i << endl;
        }
    }
    else if (x < y) {
        for (int i = x; i <= y; ++i) {
            cout << i << endl;
        }
    }
    else {
        cout << x << endl;
    }
}
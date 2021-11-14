#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, sum;
    sum = 0; a = 1;
    while (a != 0) {
        cin >> a;
        sum = sum + a;
    }
    cout << "Ñóììà = " << sum << endl;
}
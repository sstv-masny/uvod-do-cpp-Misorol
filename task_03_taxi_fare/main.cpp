#include <iostream>
using namespace std;

int main() {
    int kilometre;
    cin >> kilometre;

    double cena;

    if (kilometre <= 2) {
        cena = 4.00;
    } else {
        cena = 4.00 + 1.50 * (kilometre - 2);
    }

    cout << cena;

    return 0;
}

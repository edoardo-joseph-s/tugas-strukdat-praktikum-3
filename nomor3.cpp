#include <iostream>
using namespace std;

int main() {
    int var_luas, ab, cd, t;

    cout << "Alas a: ";
    cin >> ab;
    cout << "Alas b: ";
    cin >> cd;
    cout << "Tinggi     : ";
    cin >> t;

    var_luas = 0.5 * t * (ab + cd);

    cout << "Luas trapesium: " << var_luas << endl;
    
    return 0;
}
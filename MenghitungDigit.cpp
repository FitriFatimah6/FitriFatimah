#include <iostream>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    cout << "Masukkan angka: ";
    cin >> number;

    int digits = countDigits(number);

    cout << "Jumlah digit dari angka " << number << " adalah: " << digits << endl;
    
    return 0;
}
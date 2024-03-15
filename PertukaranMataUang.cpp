#include <iostream>
using namespace std;

int main() {
    int uang;
    cout << "Masukkan nilai uang (dalam kelipatan 25): ";
    cin >> uang;

    int pecahan1000 = uang / 1000;
    int sisa = uang % 1000;

    int pecahan500 = sisa / 500;
    sisa %= 500;

    int pecahan100 = sisa / 100;
    sisa %= 100;

    int pecahan50 = sisa / 50;
    sisa %= 50;

    int pecahan25 = sisa / 25;

    cout << "Uang senilai Rp" << uang << " setara dengan:" << endl;
    cout << pecahan1000 << " buah pecahan Rp1000" << endl;
    cout << pecahan500 << " buah pecahan Rp500" << endl;
    cout << pecahan100 << " buah pecahan Rp100" << endl;
    cout << pecahan50 << " buah pecahan Rp50" << endl;
    cout << pecahan25 << " buah pecahan Rp25" << endl;
    
    return 0;
}
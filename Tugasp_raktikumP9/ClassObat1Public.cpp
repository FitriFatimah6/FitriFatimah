#include <iostream>
using namespace std;

// Deklarasi kelas
class Obat {
public:
    string namaobat;
    int harga;
    char kodeobat;

    // Metode untuk menampilkan informasi
    void tampilkan_info() {
        cout << "Namaobat: " << namaobat << endl;
        cout << "Harga: " << harga << endl;
        cout << "Kodeobat: " << kodeobat << endl;
    }
};

int main() {
    // Membuat objek dari kelas obat
    Obat kimia;

    // Memberi nilai atribut objek
    kimia.namaobat = "Paracetamol";
    kimia.harga = 5000;
    kimia.kodeobat = 'P';

    // Memanggil metode untuk menampilkan informasi
    kimia.tampilkan_info();

    return 0;
}
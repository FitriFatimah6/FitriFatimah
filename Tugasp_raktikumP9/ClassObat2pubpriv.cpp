#include <iostream>
#include <string>

class Obat {
private:
    std::string namaObat;
    int harga;
    char kodeObat;

public:
    // Konstruktor untuk menginisialisasi objek Obat
    Obat(std::string n, int h, char k) {
        namaObat = n;
        harga = h;
        kodeObat = k;
    }

    // Setter untuk mengatur namaObat
    void setNamaObat(std::string n) {
        namaObat = n;
    }

    // Getter untuk mendapatkan namaObat
    std::string getNamaObat() {
        return namaObat;
    }

    // Setter untuk mengatur harga
    void setHarga(int h) {
        harga = h;
    }

    // Getter untuk mendapatkan harga
    int getHarga() {
        return harga;
    }

    // Setter untuk mengatur kodeObat
    void setKodeObat(char k) {
        kodeObat = k;
    }

    // Getter untuk mendapatkan kodeObat
    char getKodeObat() {
        return kodeObat;
    }

    // Metode untuk menampilkan informasi Obat
    void tampilkanInfo() {
        std::cout << "Nama Obat: " << namaObat << ", Harga: " << harga << ", Kode Obat: " << kodeObat << std::endl;
    }
};

int main() {
    // Membuat objek obat
    Obat obat("Paracetamol", 5000, 'P');

    // Menggunakan metode public untuk mengakses data private
    std::cout << "Informasi awal Obat:" << std::endl;
    obat.tampilkanInfo();

    // Mengubah namaObat, harga, dan kodeObat menggunakan setter
    obat.setNamaObat("Ibuprofen");
    obat.setHarga(6000);
    obat.setKodeObat('I');

    // Menampilkan informasi yang sudah diubah
    std::cout << "Informasi setelah diubah:" << std::endl;
    obat.tampilkanInfo();

    return 0;
}
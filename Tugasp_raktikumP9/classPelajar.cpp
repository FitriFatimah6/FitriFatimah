#include<iostream>
#include<string>

class Pelajar {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;
    std::string mbti;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Pelajar
    Pelajar(std::string n, int u, std::string m) {
        nama = n;
        umur = u;
        mbti = m;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }

    //Setter untuk mengatur mbti
    void setMbti(std::string m){
        mbti = m;
    }

    //Getter untuk mendapatkan mbti
    std::string getMbti(){
        return mbti;
    }

    // Metode untuk menampilkan informasi Pelajar
    void tampilkanInfo() {
       std::cout << "Nama: " << nama << ", Umur: " << umur << "mbti" << mbti << std::endl;
    }
};

int main() {
    // Membuat objek pelajar
    Pelajar pjr("Fitri", 20 , " intj ");

    // Menggunakan metode public untuk mengakses data private
    std::cout << "Informasi awal Pelajar:" << std::endl;
    pjr.tampilkanInfo();

    // Mengubah nama umur dan mbti menggunakan setter
    pjr.setNama("Piti");
    pjr.setUmur(21);
    pjr.setMbti("INTJ");

    // Menampilkan informasi yang sudah diubah
    std::cout << "Informasi setelah diubah:" << std::endl;
    pjr.tampilkanInfo();

    return 0;
}

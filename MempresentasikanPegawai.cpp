#include <iostream>
using namespace std;

// Struktur yang menyimpan data tentang seorang pegawai
struct Pegawai {
  string nama;
  string departemen;
  float gaji;
};

// Fungsi untuk menaikan gaji seorang pegawai
void naikGaji(Pegawai& pegawai) {
  pegawai.gaji *= 1.10; // naikkan gaji sebesar 10%
}

int main() {
  // Buat objek pegawai dengan nama "budi", departemen "IT", dan gaji Rp. 5.000.000
  Pegawai pegawai1;
  pegawai1.nama = "budi";
  pegawai1.departemen = "IT";
  pegawai1.gaji = 5000000;

  // Tampilkan data pegawai sebelum naik gaji
  cout << "Data pegawai sebelum naik gaji:" << endl;
  cout << "Nama: " << pegawai1.nama << endl;
  cout << "Departemen: " << pegawai1.departemen << endl;
  cout << "Gaji: " << pegawai1.gaji << endl;

  // Naikkan gaji pegawai
  naikGaji(pegawai1);

  // Tampilkan data pegawai setelah naik gaji
  cout << "\nData pegawai setelah naik gaji:" << endl;
  cout << "Nama: " << pegawai1.nama << endl;
  cout << "Departemen: " << pegawai1.departemen << endl;
  cout << "Gaji: " << pegawai1.gaji << endl;

  return 0;
}
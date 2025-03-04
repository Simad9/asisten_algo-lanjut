#include <iostream>
using namespace std;

struct Mahasiswa {
  string nama;
  int umur;
};

int main() {
  int jumlahMahasiswa;
  cout << "Masukkan jumlah mahasiswa: ";
  cin >> jumlahMahasiswa;

  Mahasiswa mhs[jumlahMahasiswa];

  for (int i = 0; i < jumlahMahasiswa; i++) {
    cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
    cin >> mhs[i].nama;
    cout << "Masukkan umur mahasiswa ke-" << i + 1 << ": ";
    cin >> mhs[i].umur;
  }

  cout << "\nData Mahasiswa:\n";
  for (int i = 0; i < jumlahMahasiswa; i++) {
    cout << "Nama: " << mhs[i].nama << ", Umur: " << mhs[i].umur << endl;
  }

  return 0;
}
// #include <iostream>
// using namespace std;

// ### Penulisan
// // int fungsiRekursif(int input) {
// //   if (statement)
// //     return x;
// //   else
// //     return fungsiRekursif(x);
// // }

// int sum(int n) {
//   if (n == 1)
//     return 1;
//   else
//     return n + sum(n - 1);
// }

// int sum(int x){
//   return x + sum(x - 1);
// }

// int sum(int y){
//   return (y == 1) ? 1 : y + sum(y - 1);
// }

// int sum(int a) {
//   int hasil = 0;

//   if (a == 1) {
//     hasil = 1;
//   } else {
//     hasil = a + sum(a - 1);
//   }

//   return hasil;
// }

// ### Latihan Deret Penjumlahan
// int main() {
//   cout << "Deret Penjumlahan = " << endl;
//   cout << "5 + 4 + 3 + 2 + 1 = " << sum(5) << endl;

//   return 0;
// }


// ### Jawaban Kasus 1
// #include <cmath>
// #include <iostream>
// using namespace std;

// double deretGeometri(int a, int r, int n) {
//   if (n == 0) return a;  // Base case
//   return a * pow(r, n) + deretGeometri(a, r, n - 1);
// }

// int main() {
//   int a, r, n;
//   cout << "Masukkan suku pertama (a): ";
//   cin >> a;
//   cout << "Masukkan rasio (r): ";
//   cin >> r;
//   cout << "Masukkan jumlah suku (n): ";
//   cin >> n;

//   cout << "Jumlah deret geometri: " << deretGeometri(a, r, n - 1) << endl;
//   return 0;
// }


// ### jawaban kasus 2
// #include <iostream>
// using namespace std;

// int sumArray(int arr[], int n) {
//     if (n <= 0) return 0; // Base case
//     return arr[n-1] + sumArray(arr, n-1);
// }

// int main() {
//     int n;
//     cout << "Masukkan jumlah elemen array: ";
//     cin >> n;
    
//     int arr[n];
//     cout << "Masukkan elemen array: ";
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     cout << "Jumlah elemen array: " << sumArray(arr, n) << endl;
//     return 0;
// }

// ### Jawaban Kasus 3
#include <iostream>
using namespace std;

void hanoi(int n, char asal, char tujuan, char bantu) {
    if (n == 1) {
        cout << "Pindahkan cakram 1 dari " << asal << " ke " << tujuan << endl;
        return;
    }
    hanoi(n - 1, asal, bantu, tujuan); // Pindahkan n-1 cakram ke tiang bantu
    cout << "Pindahkan cakram " << n << " dari " << asal << " ke " << tujuan << endl;
    hanoi(n - 1, bantu, tujuan, asal); // Pindahkan n-1 cakram ke tiang tujuan
}

int main() {
    int n;
    cout << "Masukkan jumlah cakram: ";
    cin >> n;
    
    hanoi(n, 'A', 'C', 'B');
    return 0;
}


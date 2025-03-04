#include <iostream>
using namespace std;

// Fungsi Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// Fungsi Straight Insertion Sort
void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

// Fungsi Straight Selection Sort
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Fungsi untuk menampilkan array
void tampilkanNilai(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    
    int nilai[n];
    cout << "Masukkan nilai ujian mahasiswa:\n";
    for(int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> nilai[i];
    }
    
    int pilihan;
    cout << "\nPilih metode pengurutan:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Straight Insertion Sort\n";
    cout << "3. Straight Selection Sort\n";
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            bubbleSort(nilai, n);
            cout << "\nHasil pengurutan dengan Bubble Sort:\n";
            break;
        case 2:
            insertionSort(nilai, n);
            cout << "\nHasil pengurutan dengan Straight Insertion Sort:\n";
            break;
        case 3:
            selectionSort(nilai, n);
            cout << "\nHasil pengurutan dengan Straight Selection Sort:\n";
            break;
        default:
            cout << "\nPilihan tidak valid!\n";
            return 0;
    }

    tampilkanNilai(nilai, n);
    
    return 0;
}

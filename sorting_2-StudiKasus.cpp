#include <iostream>
using namespace std;

// Fungsi Shell Sort
void shellSort(int arr[], int n) {
    int gap, i, j, temp;
    for(gap = n/2; gap > 0; gap /= 2) {
        for(i = gap; i < n; i++) {
            temp = arr[i];
            for(j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

// Fungsi Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[low];  // Pivot diambil dari elemen pertama
        int left = low + 1;
        int right = high;
        int temp;

        while (left <= right) {
            while (left <= high && arr[left] <= pivot) left++;
            while (arr[right] > pivot) right--;
            if (left < right) {
                // Tukar manual tanpa swap()
                temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        }

        // Tukar pivot dengan arr[right]
        temp = arr[low];
        arr[low] = arr[right];
        arr[right] = temp;

        quickSort(arr, low, right - 1);
        quickSort(arr, right + 1, high);
    }
}

// Fungsi untuk menampilkan array
void tampilkanHarga(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah barang: ";
    cin >> n;
    
    int harga[n];
    cout << "Masukkan harga masing-masing barang:\n";
    for(int i = 0; i < n; i++) {
        cout << "Harga barang ke-" << i+1 << ": ";
        cin >> harga[i];
    }
    
    int pilihan;
    cout << "\nPilih metode pengurutan:\n";
    cout << "1. Shell Sort\n";
    cout << "2. Quick Sort\n";
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            shellSort(harga, n);
            cout << "\nHasil pengurutan dengan Shell Sort:\n";
            break;
        case 2:
            quickSort(harga, 0, n - 1);
            cout << "\nHasil pengurutan dengan Quick Sort:\n";
            break;
        default:
            cout << "\nPilihan tidak valid!\n";
            return 0;
    }

    tampilkanHarga(harga, n);
    
    return 0;
}

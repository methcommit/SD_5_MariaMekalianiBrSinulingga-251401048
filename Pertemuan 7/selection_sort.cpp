#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n;

    cout << "Masukkan jumlah elemen data: ";
    cin >> n;

    int data[n];

    cout << "Masukkan data: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    // Algoritma Selection Sort dengan menampilkan tiap tahap
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;
        for (int j = i + 1; j < n; j++){
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        
        // Proses tukar posisi (swap)
        int temp = data[i];
        data[i] = data[minIndex];
        data[minIndex] = temp;

        // Mencetak kondisi array setelah setiap iterasi selesai
        for (int k = 0; k < n; k++){
            cout << data[k] << " ";
        }
        cout << endl;
    }

    // Mencetak hasil akhir setelah perulangan sorting selesai sepenuhnya
    cout << "Array setelah selesai sorting: ";
    for (int i = 0; i < n; i++){
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
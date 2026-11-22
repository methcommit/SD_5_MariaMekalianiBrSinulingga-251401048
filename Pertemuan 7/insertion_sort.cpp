#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n]; // nama_arr[n]

    cout << "Masukkan elemen: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    // Insertion sort
    for (int i = 1; i < n - 1; i++){
        int key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }

    for(int i = 0; i < n; i++){
        cout << data[i] << " ";
    }
}
    
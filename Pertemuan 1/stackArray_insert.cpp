#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

// Push function
void push (int value) {
    if (top == MAX - 1) {
        cout << "Stack penuh!" << endl;
    } else {
        top++;
        stack[top] = value;
        cout << value << " ditambahkan ke stack." << endl;
    }
}

// Pop function
void pop() {
    if (top == -1) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "\n" << stack[top] << " dihapus dari stack." << endl;
        top--;
    }
}

// Display function
void display() {
    if (top == -1) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "\nIsi stack: \n";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    system("cls");

    cout << "Masukkan jumlah elemen stack (maksimal 5): ";
    int jumlah;
    cin >> jumlah;

    if (jumlah > MAX) {
        cout << "Jumlah elemen melebihi kapasitas stack!" << endl;
        return 1;
    }

    cout << "Masukkan " << jumlah << " elemen stack: " << endl;
    for (int i = 0; i < jumlah; i++) {
        int value;
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> value;
        push(value);
    }

    display();
    pop();
    display();
}

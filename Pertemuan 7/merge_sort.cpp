#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& l, int s, int m, int e) {
    int i = s;
    int j = m + 1;
    int k = 0;
    
    vector<int> temp(e - s + 1);
    
    while (i <= m && j <= e) {
        if (l[i] <= l[j]) {
            temp[k] = l[i];
            i++;
        } else {
            temp[k] = l[j];
            j++;
        }
        k++;
    }
    
    while (i <= m) {
        temp[k] = l[i];
        i++;
        k++;
    }
    
    while (j <= e) {
        temp[k] = l[j];
        j++;
        k++;
    }
    
    k = 0;
    for (int idx = s; idx <= e; idx++) {
        l[idx] = temp[k];
        k++;
    }
}

void mergeSort(vector<int>& l, int s, int e) {
    if (s < e) {
        int m = s + (e - s) / 2; 
        mergeSort(l, s, m);
        mergeSort(l, m + 1, e);
        merge(l, s, m, e);
    }
}

void mergeSortAlgorithm(vector<int>& l) {
    if (!l.empty()) {
        mergeSort(l, 0, l.size() - 1);
    }
}

int main() {
    vector<int> l = {5, 3, 4, 1, 2};
    
    cout << "Before sort: ";
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;
    
    mergeSortAlgorithm(l);
    
    cout << "After sort: ";
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
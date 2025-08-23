#include <iostream>
using namespace std;

void Cubes(int *y, int n) {
    for (int i = 0; i < n; i++) {
        cout << (*(y + i)) * (*(y + i)) * (*(y + i)) << "\t";}}

int main() {
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int k[n][n];
    cout << endl<<"Enter array elements:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "k[" << i << "][" << j << "] = ";
            cin >> k[i][j];}}

    cout << endl<<"C elements:"<<endl;
    Cubes(*k, n * n);
}
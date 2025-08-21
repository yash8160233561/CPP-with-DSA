#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int A[rows][cols];
    cout << "array input of :-" << endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Transpose Matrix:-";
    for (int i = 0; i < cols; i++){
        for (int j = 0; j < rows; j++){
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Original Matrix:-";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

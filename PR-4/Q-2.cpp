#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter rows:- ";
    cin >> rows;
    cout << "Enter columns:- ";
    cin >> cols;

    int A[rows][cols];
    cout << "array input :-" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++){
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    int largest;
    for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
    if (A[i][j] > largest)
    largest = A[i][j];
    cout << "Largest number " << largest ;
}
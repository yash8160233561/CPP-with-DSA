#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number rows:- ";
    cin >> rows;
    cout << "Enter number columns:- ";
    cin >> cols;
    cout << endl;
    int arr[rows][cols];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << "Enter A[" << i << "][" << j << "]: ";
            cin >> arr[i][j];}
        cout << endl;}
    cout << "Matrix:-" << endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";}
        cout << endl;}
    int row;
    cout << "Enter print and sum :- ";
    cin >> row;
    cout << endl;
    if (row < 1 || row > rows){
        cout << "Invalid row " << endl;}
    int rowSum = 0;
    cout << " row " << row << ": ";
    for (int j = 0; j < cols; j++){
        cout << arr[row - 1][j] << " ";
        rowSum += arr[row - 1][j];}
    cout << endl << "Sum of row " << row << " = " << rowSum << endl << endl;
    int column;
    cout << "Enter print and sum :- ";
    cin >> column;
    if (column < 1 || column > cols){
        cout << "Invalid column" << endl;}
    int colSum = 0;
    cout << " column " << column << ": ";
    for (int i = 0; i < rows; i++){
        cout << arr[i][column - 1] << " ";
        colSum += arr[i][column - 1];}
    cout << endl << "Sum of column " << column << " = " << colSum << endl << endl;
}

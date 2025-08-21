#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter your size : ";
    cin >> size;

    int A[size];
    cout << endl << "array input" << endl;

    for (int i = 0; i < size; i++){
        cout << "Enter A[" << i << "]:- ";
        cin >> A[i];
    }
    cout << endl << "Array Negative :" << endl;

    for (int i = 0; i < size; i++){
        if (A[i] < 0){
            cout << A[i] << "- ";
        }
    }
    cout;
}
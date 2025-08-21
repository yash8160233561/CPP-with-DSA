#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;}
int subtract(int a, int b){
    return a - b;}
int multiply(int a, int b){
    return a * b;}
int divide(int a, int b){
    return b != 0 ? a / b : 0;}
int mod(int a, int b){
    return b != 0 ? a % b : 0;}
int main(){
    int choice, a, b;
    do{
        cout << endl << "1 for +" << endl;
        cout << "2 for -" << endl;
        cout << "3 for *" << endl;
        cout << "4 for /" << endl;
        cout << "5 for %" << endl;
        cout << "0 for Exit" << endl;

        cout << endl << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 0){
            cout << "Exiting the program..." << endl;
            break;
        }

        cout << "Enter the first number: ";
        cin >> a;
        cout << endl;

        cout << "Enter the second number: ";
        cin >> b;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Addition of " << a << " + " << b << " = " << add(a, b);
            break;
        case 2:
            cout << "Subtraction of " << a << " - " << b << " = " << subtract(a, b);
            break;
        case 3:
            cout << "Multiplication of " << a << " * " << b << " = " << multiply(a, b);
            break;
        case 4:
            cout << "Division of " << a << " / " << b << " = " << divide(a, b);
            break;
        case 5:
            cout << "Modulus of " << a << " % " << b << " = " << mod(a, b);
            break;
        default:
            cout << "Invalid choice! Please try again.";
        }
    } while (choice != 0);
}

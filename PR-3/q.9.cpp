#include<iostream>
using namespace std;
main(){
    for(int i=1; i<=5; i++){
        for(int s=5; s>i; s--){
            cout << "  ";
        }
        for(int j=i; j>=1; j--){
            cout << "* ";
        }
        for(int j=2; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=4; i>=1; i--){
        for(int s=i; s<5; s++){
            cout << "  ";
        }
        for(int j=i; j>=1; j--){
            cout << "* ";
        }
        for(int j=2; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
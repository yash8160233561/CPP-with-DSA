#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char yash[50];
    cout << "Enter any string: ";
    gets(yash);
    int khu = 0;
    for (int i = 0; yash[i] != 0; i++)
    { khu++; }
    cout << "The string  " << khu << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int s = 5; s > i; s--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout <<"*"<<" ";
        }
        for (int j = i-1; j >= 1; j--)
        {
            cout<<"*"<<" ";
        }
        cout << endl;
        
    }
    for (int i = 1; i <=4; i++)
    {
        for (int s = 0; s < i; s++)
        {
            cout << "  ";
        }
        for (int j = i; j <= 4; j++)
        {
            cout <<"*"<<" ";
        }
        for (int j = 3; j >= i; j--)
        {
            cout<<"*"<<" ";
        }
        cout << endl;
        
    }
}
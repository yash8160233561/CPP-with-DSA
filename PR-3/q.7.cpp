#include <iostream>
using namespace std;

int main()
{
    int n = 5; int a = (n/2)+1;
    for(int i =1; i <= n; i++)
    {
        for(int j =1; j <= n; j++)
        {
            if ((i == 1 && j <= a) || j == 1 || (j == a && i <= a) || (i == a && j <=a))
            {
            cout<<" * ";
            }
            else{
            cout<<"  ";
            }

        }
        cout<<endl;

    }
}
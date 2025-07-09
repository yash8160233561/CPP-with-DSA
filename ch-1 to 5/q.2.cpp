#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "ENTER THE NUMBER :";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " IS AN EVEN NUMBER..!" << endl;
        if (num%5==0)
        {
            cout << num << " IS A DIVISIBLE BY 5..!"<<endl;
        }
        else
        {
            cout << num<<" IS NOT DIVISIBLE 5..!"<<endl;
        }
    }
    else
    {
        cout << num <<" IS AN ODD NUMBER..!"<<endl;
         if (num%5==0)
        {
            cout << num << " IS A DIVISIBLE BY 5..!"<<endl;
        }
        else
        {
            cout << num<<" IS NOT DIVISIBLE 5..!"<<endl;
        }
    }
}


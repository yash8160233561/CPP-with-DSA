#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *nextNode;

    Node(int val)
    {
        value = val;
        nextNode = nullptr;
    }
};

class List
{
private:
    Node *start;
    int len;

public:
    List()
    {
        start = nullptr;
        len = 0;
    }

    void addFront(int val)
    {
        Node *temp = new Node(val);
        temp->nextNode = start;
        start = temp;
        len++;
        cout << endl
             << " Element added successfully!" << endl
             << endl;
    }

    void findElement(int index)
    {
        if (start == nullptr)
        {
            cout << endl
                 << " List is empty." << endl;
            return;
        }

        if (index < 0 || index >= len)
        {
            cout << endl
                 << " Invalid index!" << endl;
            return;
        }

        Node *temp = start;
        for (int i = 0; i < index; i++)
            temp = temp->nextNode;

        cout << endl
             << " Value at index " << index << ": " << temp->value << endl
             << endl;
    }

    void removeAt(int index)
    {
        if (start == nullptr)
        {
            cout << endl
                 << " Nothing to delete." << endl;
            return;
        }

        if (index < 0 || index >= len)
        {
            cout << endl
                 << " Invalid position." << endl;
            return;
        }

        Node *curr = start;
        Node *prev = nullptr;

        if (index == 0)
        {
            start = start->nextNode;
            delete curr;
        }
        else
        {
            for (int i = 0; i < index; i++)
            {
                prev = curr;
                curr = curr->nextNode;
            }
            prev->nextNode = curr->nextNode;
            delete curr;
        }

        len--;
    }

    void show()
    {
        if (start == nullptr)
        {
            cout << endl
                 << " List is empty." << endl
                 << endl;
            return;
        }

        cout << "Current List: ";
        Node *temp = start;
        while (temp != nullptr)
        {
            cout << temp->value << "  ";
            temp = temp->nextNode;
        }
        cout << endl
             << endl;
    }
};

int main()
{
    List lst;
    int choice, data, pos;

    do
    {
        cout << "1  Add" << endl;
        cout << "2  Find element " << endl;
        cout << "3  Delete element " << endl;
        cout << "4  Show elements" << endl;
        cout << "0  Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter to insert: ";
            cin >> data;
            lst.addFront(data);
            break;

        case 2:
            cout << "Enter index to search: ";
            cin >> pos;
            lst.findElement(pos);
            break;

        case 3:
            cout << "Enter index to delete: ";
            cin >> pos;
            lst.removeAt(pos);
            break;

        case 4:
            lst.show();
            break;

        case 0:
            cout << endl
                 << "👋 Exiting ..." << endl;
            break;

        default:
            cout << endl
                 << " Invalid choice!" << endl
                 << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}

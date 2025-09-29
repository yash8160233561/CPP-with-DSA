#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

template <class T>
class StudentManager
{
private:
    vector<T> ids;
    vector<string> names;

    T id;
    string name;

    void inputStudent()
    {
        cout << "Student ID: ";
        cin >> id;
        cin.ignore();
        cout << "Student Name: ";
        getline(cin, name);
    }

public:
    void add()
    {
        cout << endl;
        inputStudent();
        ids.push_back(id);
        names.push_back(name);
        cout << endl
             << "Student Added!" << endl
             << endl;
    }

    void display()
    {
        if (ids.empty())
        {
            cout << "No students!" << endl
                 << endl;
            return;
        }

        else
        {
            cout << "All Students:"
                 << endl;
            for (int i = 0; i < ids.size(); i++)
            {
                cout << "ID: " << ids[i] << endl
                     << "Name: " << names[i] << endl;
            }
            cout << endl;
        }
    }

    void search()
    {
        T search;
        cout << endl;
        cout << "Enter ID to Search: ";
        cin >> search;
        cout << endl;
        for (int i = 0; i < ids.size(); i++)
        {
            if (ids[i] == search)
            {
                cout << "ID: " << ids[i] << endl
                     << "Name: " << names[i] << endl;
                cout << endl;
                return;
            }
        }
        cout << "Student ID " << search << " not found!" << endl
             << endl;
    }

    void remove()
    {
        T remove;
        cout << "Enter ID to Remove: ";
        cin >> remove;

        for (int i = 0; i < ids.size(); i++)
        {
            if (ids[i] == remove)
            {
                ids.erase(ids.begin() + i);
                names.erase(names.begin() + i);
                cout << "Student removed successfully!" << endl;
                return;
            }
        }
        cout << "Student ID " << remove << " not found!" << endl
             << endl;
    }
};

int main()
{
    StudentManager<int> sm;
    int choice;

    do
    {
        cout << "===== Student Management System =====" << endl;
        cout << "1. Add" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Remove Student" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            sm.add();

            break;
        case 2:
            sm.display();
            break;
        case 3:
            sm.search();
            break;
        case 4:
            sm.remove();
            break;
        case 0:
            cout << "Exiting program..." << endl
                 << endl;
            break;
        default:
            cout << "Invalid choice" << endl
                 << endl;
        }
    } while (choice != 0);

    return 0;
}

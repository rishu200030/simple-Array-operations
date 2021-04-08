#include <iostream>

using namespace std;
int status = 0;
int size = -1;
int arr[100];
int capacity = sizeof(arr);
int insert()
{
    int index;
    int element;
    if (status == 0)
    {
        cout << "Enter how many element do you want to insert ";
        cin >> ::size;
        cout << endl;
        for (int i = 0; i < ::size; i++)
        {
            cout << "Enter element " << i + 1 << " :";
            cin >> arr[i];
        }
        status = 1;
        cout << status;
        return 1;
    };
    if (::size >= capacity && status == 1)
    {
        cout << "Array is full" << endl;
    }
    else
    {
        cout << "Enter the index position and Element to be inserted " << endl;
        cin >> index >> element;
        if (index >= 0 && index <= ::size)
        {
            for (int i = ::size; i >= index; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[index] = element;
            ::size = ::size + 1;
        }
        else
        {
            cout << "Enter proper index position " << endl;
        };
    };

    return 1;
};

int del()
{
    int delele;

    if (::size == -1)
    {
        cout << "array is Empty " << endl;
        return 1;
    }
    else
    {
        cout << "Which index postion element you want to Delete :";
        cin >> delele;
        cout << endl;
        if (delele >= 0 && delele <= ::size - 1)
        {
            if (delele == ::size - 1)
            {
                ::size = ::size - 1;
                if (::size == 0)
                {
                    ::size = -1;
                };
            }
            else
            {

                for (int j = delele; j < ::size - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                ::size = ::size - 1;
            }
        }
        else
        {
            cout << "Enter proper index position " << endl;
        }
    }
    return 1;
};

int display()
{
    if (::size == -1)
    {
        cout << "----------------------" << endl;
        cout << "Array is Empty" << endl;
        cout << "----------------------" << endl;
    }
    else
    {
        cout << "----------------------" << endl;
        cout << "The array is : ";
        for (int i = 0; i < ::size; i++)
        {
            cout << arr[i] << "  ";
        }
        cout << endl;
        cout << "----------------------" << endl;
    }
    return 1;
}

int main()
{

    int option;

    cout << "welcome , please enter the operation to be performed" << endl;
    do
    {
        cout << "***********************" << endl;
        cout << "  OPERTAIONS " << endl;
        cout << "To INSERT press 1" << endl;
        cout << "To DELETE press 2" << endl;
        cout << "To DISPLAY press 3" << endl;
        cout << "To QUIT press 0" << endl;
        cout << "***********************" << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 0:
            break;

        default:
            cout << "please enter valid option" << endl;
        }
    } while (option != 0);

    return 0;
}
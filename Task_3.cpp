#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    // Upper Half
    for(int i = 1; i <= n; i++)
    {
        // Spaces
        for(int space = 1; space <= n - i; space++)
        {
            cout << "  ";
        }

        // Numbers
        for(int number = 1; number <= 2 * i - 1; number++)
        {
            cout << number << " ";
        }

        cout << endl;
    }

    // Lower Half
    for(int i = n - 1; i >= 1; i--)
    {
        // Spaces
        for(int space = 1; space <= n - i; space++)
        {
            cout << "  ";
        }

        // Numbers
        for(int number = 1; number <= 2 * i - 1; number++)
        {
            cout << number << " ";
        }

        cout << endl;
    }

    return 0;
}
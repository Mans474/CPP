#include<iostream>
using namespace std;

class Matrix_Operation
{
    int A[3][3];
    int B[3][3];
    int result[3][3];

    public:

    void MatrixA()
    {
        cout << "Enter elements for Matrix A:\n";

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin >> A[i][j];
            }
        }

        cout << "\nMatrix A:\n";

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << A[i][j] << " ";
            }

            cout << endl;
        }
    }

    void MatrixB()
    {
        cout << "\nEnter elements for Matrix B:\n";

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin >> B[i][j];
            }
        }

        cout << "\nMatrix B:\n";

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << B[i][j] << " ";
            }

            cout << endl;
        }
    }

    void Menu()
    {
        int choice;

        cout << "\nChoose Operation:\n";
        cout << "1. Addition\n";
        cout << "2. Transpose of Matrix A\n";

        cin >> choice;

        switch(choice)
        {
            case 1:

            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    result[i][j] = A[i][j] + B[i][j];
                }
            }

            cout << "\nAddition Result:\n";

            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    cout << result[i][j] << " ";
                }

                cout << endl;
            }

            break;

            case 2:

            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    result[i][j] = A[j][i];
                }
            }

            cout << "\nTranspose of Matrix A:\n";

            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    cout << result[i][j] << " ";
                }

                cout << endl;
            }

            break;

            default:
            cout << "Invalid Choice";
        }
    }
};

int main()
{
    Matrix_Operation obj;

    obj.MatrixA();
    obj.MatrixB();
    obj.Menu();

    return 0;
}
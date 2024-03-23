#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int dot = 1;
    int star = n - 1;

    for (int i = 0; i < n - 1; i++)
    {

        for (int k = 1; k <= star; k++)
        {
            cout << "*";
        }
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << ".";
        }
        star--;

        for (int m = n - i - 1; m > 0; m--)
        {
            cout << "*";
        }
        cout << endl;
    }

    ///////////////
    star = 1;
    for (int i = n; i > 0; i--)
    {

        for (int k = 1; k < star; k++)
        {
            cout << "*";
        }
        for (int k = (2 * i + 1); k > 2; k--)
        {
            cout << ".";
        }
        star++;

        for (int m = 0; m < n - i; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
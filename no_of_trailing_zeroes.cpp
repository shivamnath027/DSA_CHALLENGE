#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            count++;
        }
    }
    cout << count << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int count = 0;
    int count = 0;
    while (n >= 5)
    {
        count += n / 5;
        n = n / 5;
    }
    cout << count << endl;
}
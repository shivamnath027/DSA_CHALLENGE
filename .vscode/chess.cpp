#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "row: ";
    cin >> m;
    cout << "column: ";
    cin >> n;
    int count = 0;
    // int SE1 = m, SE2 = n, SW1 = m, SW2 = n, NW1 = m, NW2 = n, NE1 = m, NE2 = n;
    // while ((SE1 > 0 && SE1 <= 8) && (SE2 > 0 && SE2 <= 8))
    // {
    //     count++;
    //     SE2++;
    //     SE1++;
    // }
    // while ((NE1 > 0 && NE1 <= 8) && (NE2 > 0 && NE2 <= 8))
    // {
    //     count++;
    //     NE2++;
    //     NE1++;
    // }
    // while ((NW1 > 0 && NW1 <= 8) && (NW2 > 0 && NW2 <= 8))
    // {
    //     count++;
    //     NW2--;
    //     NW1--;
    // }
    // while ((SE1 > 0 && SW1 <= 8) && (SE2 > 0 && SW2 <= 8))
    // {
    //     count++;
    //     SW1--;
    //     SW2--;
    // }
    count += min(8 - m, 8 - n);
    cout << count << endl;
    count += min(m - 1, 8 - n);
    cout << count << endl;
    count += min(m - 1, n - 1);
    cout << count << endl;
    count += min(8 - m, n - 1);
    cout << count << endl;
}
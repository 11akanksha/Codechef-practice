#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        if (a[0] == '1')
        {
            a[0] = '0';
        }
        cout << '1' + a << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        a = a + b;
        if (a < 3)
        {
            cout << "1" << endl;
        }
        else if (a >= 3 && a <= 10)
        {
            cout << "2" << endl;
        }
        else if (a >= 11 && a <= 60)
        {
            cout << "3" << endl;
        }
        else
        {
            cout << "4" << endl;
        }
    }
    return 0;
}

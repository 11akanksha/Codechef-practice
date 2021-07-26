#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e, k, c = 1, div;
        cin >> e >> k;
        div = e / k;
        while (div != 0)
        {
            div = div / k;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}

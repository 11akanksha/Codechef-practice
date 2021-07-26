#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long m1;
        m1 = min(a, b);
        long long m2 = max(a, b);

        m1 = m1 + 1;
        if (m1 > m2)
        {
            cout << "0" << '\n';
            continue;
        }

        long long val = ceil(((double)b - m1) / 2) + ceil(((double)m1 - a) / 2);

        cout << val << '\n';
    }
}

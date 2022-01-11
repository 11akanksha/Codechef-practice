#include <iostream>
#include <vector>
using namespace std;

const int max_allowed_ai = 500000;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        if (n == 1)
        {
            cout << x << endl;
            continue;
        }
        vector<int> v(n);
        int temp_xor = 0;
        register int i;
        for (i = 0; i < n - 1; ++i)
        {
            v[i] = i;
            temp_xor ^= i;
        }
        int last = temp_xor ^ x;
        int set_18th_bit = (1LL << 18);
        if (last >= (n - 1) and last <= max_allowed_ai)
        {
            v[n - 1] = last;
        }
        else
        {
            // We set the 18th bit of the no in 'last'
            v[n - 1] = last ^ set_18th_bit;
            if ((v[0] ^ set_18th_bit) == v[n - 1])
                v[1] ^= set_18th_bit;
            else
                v[0] ^= set_18th_bit;
        }

        for (i = 0; i < n; ++i)
        {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}

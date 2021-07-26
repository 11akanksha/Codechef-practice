#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        // ll ans = min((ll)pow(2, n), 2 * k) * ((ll)pow(2, n) - 1);
        //which is same as doing(but takes lesser time):
        ll ans = min(2 * k, (ll)(1 << n)) * ((1 << n) - 1);
        cout << ans << endl;
    }
    return 0;
}

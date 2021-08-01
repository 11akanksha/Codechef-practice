#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d, h;
        cin >> n >> d >> h;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int wl = 0, f = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                wl += a[i];
                if (wl > h)
                {
                    cout << "YES" << endl;
                    f = 1;
                    break;
                }
            }
            else
            {
                if (wl < d)
                {
                    wl = 0;
                }
                else
                {
                    wl -= d;
                }
            }
        }
        if (f == 0)
        {
            cout << "NO" << endl;
        }
        delete[] a;
    }
    return 0;
}

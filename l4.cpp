#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        int *a = new int[n];
        int *b = new int[n];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                b[j] = a[i];
                j++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                b[j] = a[i];
                j++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
        delete[] a;
        delete[] b;
    }

    return 0;
}

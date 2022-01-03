#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        if (N % 2 == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            string s;
            for (int i = 0; i < N / 2; i++)
            {
                s += '0';
            }
            for (int i = N / 2; i < N; i++)
            {
                s += '1';
            }
            cout << s << endl;
        }
    }
    return 0;
}

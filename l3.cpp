#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() <= 3)
        {
            cout << "Error" << endl;
            continue;
        }
        if (s[0] == '<' && s[1] == '/' && s[s.size() - 1] == '>')
        {
            int len = 0;
            for (int i = 2; i < s.size() - 1; i++)
            {
                if ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 97 && s[i] <= 122))
                {
                    len++;
                }
            }
            if (len == s.size() - 3)
            {
                cout << "Success" << endl;
            }
            else
            {
                cout << "Error" << endl;
            }
        }
        else
        {
            cout << "Error" << endl;
        }
    }
    return 0;
}

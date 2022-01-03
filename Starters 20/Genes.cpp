#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<char, int> m;
    m.insert(pair<char, int>('R', 3));
    m.insert(pair<char, int>('B', 2));
    m.insert(pair<char, int>('G', 1));

    char a, b;
    cin >> a >> b;
    if (m[a] >= m[b])
    {
        cout << a;
    }
    else if (m[b] > m[a])
    {
        cout << b;
    }
    return 0;
}

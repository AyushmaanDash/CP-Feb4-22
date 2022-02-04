#include <iostream>
using namespace std;

int main()
{
    int t, x, m, n, answer[1000];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> n >> m;
        while (x && (m * n))
        {
            if ((((x / 2) + 10) >= x) || ((x / 2 - 10) <= 10))
            {
                x = x - 10;
                m--;
            }

            else
            {
                x = (x / 2) + 10;
                n--;
            }
        }

        answer[i] = x;
    }

    for (int i = 0; i < t; i++)
    {
        if (answer[i] <= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}


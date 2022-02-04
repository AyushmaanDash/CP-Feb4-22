#include <iostream>
using namespace std;

int main()
{
    int t, x, m, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> n >> m;
        while (x && (m * n))
        {
            if (((x / 2) + 10) >= x)
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

        if (x <= 0)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}

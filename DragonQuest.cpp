#include <iostream>
using namespace std;

int main()
{
    int t, x, m, n, answer[1000];
    cin >> t;
    int flag = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> n >> m;
        while (x && (m * n))
        {
            if ((((x / 2) + 10) >= x) || ((x / 2 - 10) <= 10))
            {
                if (m)
                {
                    x = x - 10;
                    m--;
                }
                else
                {
                    flag++;
                    break;
                }
            }

            else
            {
                if (n)
                {
                    x = (x / 2) + 10;
                    n--;
                }
                else
                {
                    flag++;
                    break;
                }

                if (flag)
                    break;
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



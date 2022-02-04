#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int flag = 0;
    for (string::iterator it = str1.begin(); it < str1.end(); it++)
    {
        if ((str1[*it] == (str2[*it] + 33)) || (str1[*it] == (str2[*it] - 33)))
            continue;
        else
        {
            flag++;
            break;
        }
    }

    if (flag)
        cout << "-1";
    else
        cout << "0";

    return 0;
}

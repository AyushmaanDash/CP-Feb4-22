#include <iostream>
using namespace std;

int main()
{
    int num, opinion, sum;
    cin >> num;
    sum = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> opinion;
        sum += opinion;
    }
    if (!sum)
        cout << "EASY";
    else
        cout << "HARD";

    return 0;
}

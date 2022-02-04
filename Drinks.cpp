#include <iostream>
using namespace std;

int main()
{
    int num;
    double sum,p;
    sum=0;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        cin>>p;
        sum+=(p/100);
    }
    cout<<100*(sum/num);
    return 0;
}

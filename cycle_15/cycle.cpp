#include <iostream>
using namespace std;

int main()
{
    int k, res;
    cin >> k;

    for (int j = 1; j <= k; j++)

    {
        for (int i=1; i <= k; i++)
        {
            res = i * j;
            cout << res << " ";
            if (res < 10)
            {
                cout << " ";
            }
        }

        cout  <<  endl;
    }
    return 0;
}
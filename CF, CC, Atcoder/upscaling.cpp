#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int l = 1; l <= 2; l++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if ((i + j) % 2 == 0)
                        cout << "##";
                    else
                        cout << "..";
                }
                cout << endl;
            }
        }
    }
    return 0;
}

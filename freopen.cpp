#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;

            sum += t;
        }

        cout << sum << endl;
    }



    return 0;
}

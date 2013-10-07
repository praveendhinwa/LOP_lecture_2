#include <bits/stdc++.h>

using namespace std;

int memo[10005];

int f (int n)
{
    int &res = memo[n];

    if (res == -1)
    {
        if (n == 0)
            res = 1;
        else if (n == 1)
            res = 1;
        else
            res = f (n - 1) + f (n - 2);
    }

    return res;
}

int main()
{
    memset (memo, -1, sizeof (memo));

    cout << f (10000) << endl;
    return 0;
}

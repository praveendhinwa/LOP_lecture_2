#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a;
    for (int i = 0; i <= 5; i++)
        a.push_back (i);

    for (int i = 0; i <= 6; i++)
    {
        int idx = lower_bound (a.begin(), a.end(), i) - a.begin();

        cout << idx << endl;
    }

    return 0;
}


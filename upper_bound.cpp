#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a;
    for (int i = 0; i <= 5; i++)
        a.push_back (i * i);

    for (int i = 0; i <= 25; i++)
    {
        int idx = upper_bound (a.begin(), a.end(), i) - a.begin();

        cout << idx << endl;
    }

    return 0;
}


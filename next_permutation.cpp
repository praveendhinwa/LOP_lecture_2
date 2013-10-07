#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a;
    for (int i = 0; i < 4; i++)
        a.push_back (i + 1);

    do
    {
        for (int i = 0; i < 4; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    while (next_permutation (a.begin(), a.end()));

    return 0;
}


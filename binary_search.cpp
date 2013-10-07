#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a;
    for (int i = 0; i <= 5; i++)
        a.push_back (i * i);

    for (int i = 0; i <= 25; i++)
    {
        int ok = false;
        if (binary_search (a.begin(), a.end(), i))
        {
            ok = true;
        }
        if (ok)
            cout << "found" << i << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}

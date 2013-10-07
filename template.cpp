#include <bits/stdc++.h>

using namespace std;

template <class T>
T Max (T a, T b)
{
    T res = a > b ? a : b;
    return res;
}

int main()
{
    cout << Max <int> (3, 4) << endl;    // 4
    cout << Max <double> (3.5, 4.6) << endl; // 4.6
    cout << Max <string> ("abc", "bcd") << endl; // bcd

    return 0;
}


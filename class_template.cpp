#include <bits/stdc++.h>

using namespace std;

template <class T>
class point
{
    public :
    T x, y;
    point ()
    {

    }
    point (T _x, T _y)
    {
        x = _x;
        y = _y;
    }

    T dist ()
    {
        return x * x + y * y;
    }
};

int main()
{
    point <int> p (3, 4);
    cout << p.dist() << endl;  // 25

    point <double> q (3.5, 4.5);
    cout << q.dist() << endl;  // 32.5

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

template <class T>
class SquareIt
{
    public:
        T x;
        SquareIt ()
        {

        }
        SquareIt (T _x)
        {
            x = _x;
        }
        T getResult ()
        {
            return x * x;
        }
};

template <>
class SquareIt <string>
{
    public:
        string x;
        SquareIt ()
        {

        }
        SquareIt (string _x)
        {
            x = _x;
        }
        string getResult ()
        {
            return x + x;
        }
};

int main()
{
    SquareIt <int> sq1 (5);
    cout << sq1.getResult() << endl;

    SquareIt <string> sq2 ("abc");
    cout << sq2.getResult() << endl;

    return 0;
}

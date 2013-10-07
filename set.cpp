#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <int> st;

    for (int i = 0; i < 10; i++)
        st.insert (i);

    for (int i = 0; i < 10; i++)
        st.insert (i);

    set <int> :: iterator it;

    for (it = st.begin(); it != st.end(); it++)
        cout << *it << endl;8

    //
    //erase (it);
    //erase (element);


    return 0;
}

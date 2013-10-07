
#include <bits/stdc++.h>

using namespace std;

int main()
{
    multimap <string , int> marks;

    marks.insert (make_pair ("praveen", 1));
    marks.insert (make_pair ("praveen", 2));
    marks.insert (make_pair ("praveen", 3));

    multimap <string, int> :: iterator it;

    it = marks.find ("praveen");

    marks.erase (it);

    // show find function
    // show normal deletion

    // sorted by first thing
    for (it = marks.begin(); it != marks.end(); it++)
        cout << it->first << " " << it->second << endl;


    return 0;
}

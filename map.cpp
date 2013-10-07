#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <string, int> marks;

    marks["praveen"] = 1;
    marks["lavania"] = 2;
    marks["harsh"] = -1;

    map <string, int> :: iterator it;

    // sorted by first thing
    for (it = marks.begin(); it != marks.end(); it++)
        cout << it->first << " " << it->second << endl;

    // deleting stuff
    it = marks.find ("harsh");
    marks.erase (it);

    if (marks.find("harsh") != marks.end())
        cout << "han hain" << endl;


    return 0;
}

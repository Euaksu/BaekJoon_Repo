#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin  >> s;
    int m;
    cin >> m;
    list<char> L;
    for (auto c:s) {
        L.push_back(c);
    } 
    auto cursor = L.end();

    while(m--)
    {
        char cmd;
        cin >> cmd;

        if (cmd == 'L')
        {
            if (cursor != L.begin())
            {
                cursor --;
            }
        }
        else if(cmd == 'D')
        {
            if (cursor != L.end())
            {
                cursor++;
            }
        }
        else if(cmd == 'B'){
            if(cursor !=L.begin())
            {
                cursor--;
                cursor = L.erase(cursor);
            } 
        }
        else if(cmd == 'P')
        {
            char add_char;
            cin >> add_char;
            L.insert(cursor, add_char);
        }

    }
    for (auto c : L)
    {
        cout << c;
    }
    cout << '\n';

}


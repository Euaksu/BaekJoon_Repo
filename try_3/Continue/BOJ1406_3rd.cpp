#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    list<char> L;
    for(auto c : s)
    {
        L.push_back(c);
    }
    list<char>::iterator cursor;
    cursor = L.end();

    int m;
    cin >> m;

    while(m--)
    {
        char cmd;
        cin >> cmd;
        
        if(cmd == 'L')
        {
            if(cursor != L.begin())
                {
                    cursor--;
                }
        }
        else if(cmd == 'D')
        {
            if(cursor != L.end())
            {
                cursor++;
            }
        }
        else if(cmd == 'B')
        {
            if(cursor != L.begin())
            {
                cursor = L.erase(--cursor); // cursor를 업데이트
            }
        }
        else if(cmd == 'P')
        {
            char add_char;
            cin >> add_char;
            L.insert(cursor, add_char);
        }
    }
    for(auto c : L)
    {
        cout << c;
    }
    cout << '\n';
}
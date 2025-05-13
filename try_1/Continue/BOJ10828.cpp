#include <bits/stdc++.h>
using namespace std;



int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    stack<int> s;

    while(n--)
    {
        string command;
        cin >> command;

        if(command == "push")
        {
            int m;
            cin >> m;
            s.push(m);
        }
        else if(command == "pop")
        {
            if(s.empty())
            {
                cout << -1 << "\n";    
            }
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if(command =="size")
        {
            cout << s.size() << "\n";
        }
        else if(command == "empty")
        {
            if(s.empty())
            {
                cout<< 1 << "\n";
            }
            else   
            {
                cout<< 0 << "\n";
        }
    }
        else if(command =="top")
        {
            if(s.empty())
            {
                cout <<-1 << "\n";
            }
            else
            cout<<s.top() <<"\n";

        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_num;
    cin >> test_num;

    stack<int> s;

    while(test_num--)
    {
        int k;
        cin >> k;
        if(k == 0)
        {
            s.pop();
        }
        else
        {
            s.push(k);
        }
        
    }
    int sum=0;

    while(!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    
    
    cout << sum;
}


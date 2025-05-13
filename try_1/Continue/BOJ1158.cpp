#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    list<int> L;
    for (int i = 1; i < N+1; i++)
    {
        L.push_back(i);
    }
    
    list<int>::iterator cursor= L.begin();
    cout << '<';
    while(!L.empty()) // 수정된 조건
    {
        
        for (int i = 1; i < K; i++)
        {           
            cursor++; // 이 줄은 if문 안에 있어야 합니다.

            if(cursor == L.end())
            {              
                cursor = L.begin();
            }
        }
        cout << *cursor; // cursor가 가리키는 값을 출력
        cursor = L.erase(cursor); // erase는 삭제된 다음 위치의 iterator를 반환
        if(!L.empty())
        {
            cout <<", ";
        }
        if(cursor == L.end()) // 삭제 후 end()를 가리키면 다시 begin()으로
            cursor = L.begin();        
    }
   cout << '>';
}
#include <bits/stdc++.h>

using namespace std;

void input();
void func();
void output();

int N, u, v, res;
vector<pair<int, int>> edge;

int main(void)
{
    input();
    func();
    output();
}

void input()
{
    cin >> N;
    for(int i = 0; i < N - 1; i++)
    {
        cin >> u >> v;
        edge.push_back(make_pair(u, v));
    }
}

void func()
{

}

void output()
{
    cout << res << '\n';
}
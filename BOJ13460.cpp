#include <bits/stdc++.h>

using namespace std;

struct Info
{
    int count;
    vector<string> cur;
    pair<int, int> r, b;
};

void input();
void func();
Info left();
Info right();
Info up();
Info down();
void output();

bool flag;
int N, M, res;
string line;
queue<Info> q;
vector<string> board;
Info info, ninfo;

int main(void)
{
    input();
    func();
    output();
}

void input()
{
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        cin >> line;
        for(int j = 0; j < M; j++)
        {
            if(line[j] == 'R')
                info.r = make_pair(i, j);
            else if(line[j] == 'B')
                info.b = make_pair(i, j);
        }
        board.push_back(line);
    }
    info.count = 0;
    info.cur = board;
}

void func()
{
    q.push(info);
    while(!q.empty())
    {
        info = q.front();
        q.pop();
        if(info.count == -1)
            continue;
        info.count += 1;
        if(flag)
            break;
        q.push(left());
        q.push(right());
        q.push(up());
        q.push(down());
        if(info.count > 10)
            break;
    }
    if(!flag)
        res = -1;
}

Info left()
{
    ninfo = info;
    for(int i = info.r.second - 1; i >= 0; i--)
    {
        if(info.cur[info.r.first][i] == 'O')
        {
            flag = true;
            ninfo.r.second = i;
            break;
        }
        else if(info.cur[info.r.first][i] == '#')
        {
            ninfo.r.second = i + 1;
            break;
        }
    }
    for(int i = info.b.second - 1; i >= 0; i--)
    {
        if(info.cur[info.b.first][i] == 'O')
        {
            if(flag && info.r.second - info.b.second > 0)
            {
                flag = false;
                ninfo.count = -1;
            }
            ninfo.b.second = i;
            break;
        }
        else if(info.cur[info.b.first][i] == '#')
        {
            ninfo.b.second = i + 1;
            break;
        }
    }
    ninfo.cur[info.r.first][info.r.second] = '.';
    ninfo.cur[info.b.first][info.b.second] = '.';
    ninfo.cur[ninfo.r.first][ninfo.r.second] = 'R';
    ninfo.cur[ninfo.b.first][ninfo.b.second] = 'B';
    return ninfo;
}

Info right()
{
    ninfo = info;
    for(int i = info.r.second + 1; i < M; i++)
    {
        if(info.cur[info.r.first][i] == 'O')
        {
            flag = true;
            ninfo.r.second = i;
            break;
        }
        else if(info.cur[info.r.first][i] == '#')
        {
            ninfo.r.second = i - 1;
            break;
        }
    }
    for(int i = info.b.second + 1; i < M; i++)
    {
        if(info.cur[info.b.first][i] == 'O')
        {
            if(flag && info.r.second - info.b.second < 0)
            {
                flag = false;
                ninfo.count = -1;
            }
            ninfo.b.second = i;
            break;
        }
        else if(info.cur[info.b.first][i] == '#')
        {
            ninfo.b.second = i - 1;
            break;
        }
    }
    ninfo.cur[info.r.first][info.r.second] = '.';
    ninfo.cur[info.b.first][info.b.second] = '.';
    ninfo.cur[ninfo.r.first][ninfo.r.second] = 'R';
    ninfo.cur[ninfo.b.first][ninfo.b.second] = 'B';
    return ninfo;
}

Info up()
{
    ninfo = info;
    for(int i = info.r.first - 1; i >= 0; i--)
    {
        if(info.cur[i][info.r.second] == 'O')
        {
            flag = true;
            ninfo.r.first = i;
            break;
        }
        else if(info.cur[i][info.r.second] == '#')
        {
            ninfo.r.first = i + 1;
            break;
        }
    }
    for(int i = info.b.first - 1; i >= 0; i--)
    {
        if(info.cur[i][info.b.second] == 'O')
        {
            if(flag && info.r.second - info.b.second > 0)
            {
                flag = false;
                ninfo.count = -1;
            }
            ninfo.b.first = i;
            break;
        }
        else if(info.cur[i][info.b.second] == '#')
        {
            ninfo.b.first = i + 1;
            break;
        }
    }
    ninfo.cur[info.r.first][info.r.second] = '.';
    ninfo.cur[info.b.first][info.b.second] = '.';
    ninfo.cur[ninfo.r.first][ninfo.r.second] = 'R';
    ninfo.cur[ninfo.b.first][ninfo.b.second] = 'B';
    return ninfo;
}

Info down()
{
    ninfo = info;
    for(int i = info.r.first + 1; i < M; i++)
    {
        if(info.cur[i][info.r.second] == 'O')
        {
            flag = true;
            ninfo.r.first = i;
            break;
        }
        else if(info.cur[i][info.r.second] == '#')
        {
            ninfo.r.first = i - 1;
            break;
        }
    }
    for(int i = info.b.first + 1; i < M; i++)
    {
        if(info.cur[i][info.b.second] == 'O')
        {
            if(flag && info.r.second - info.b.second > 0)
            {
                flag = false;
                ninfo.count = -1;
            }
            ninfo.b.first = i;
            break;
        }
        else if(info.cur[i][info.b.second] == '#')
        {
            ninfo.b.first = i - 1;
            break;
        }
    }
    ninfo.cur[info.r.first][info.r.second] = '.';
    ninfo.cur[info.b.first][info.b.second] = '.';
    ninfo.cur[ninfo.r.first][ninfo.r.second] = 'R';
    ninfo.cur[ninfo.b.first][ninfo.b.second] = 'B';
    return ninfo;
}

void output()
{
    cout << res << '\n';
}
#include <bits/stdc++.h>

int d(int N)
{
    int res = 0;
    std::string str = std::to_string(N);
    for(int i = 0; i < str.size(); i++)
        res += stoi(str.substr(i, 1));
    return N + res;
}

void self_number(void)
{
    int N;
    std::vector<bool> vec(10001, false);
    for(N = 1; N < vec.size(); N++)
    {
        int res = d(N);
        if(d(N) > 10000)
            continue;
        else
           vec.at(d(N)) = true;
    }
    for(int i = 1; i < vec.size(); i++)
    {
        if(vec.at(i) == false)
            std::cout << i << '\n';
    }
}

int main(void)
{
    self_number();
}
#include <bits/stdc++.h>

int main(void)
{
    int N, re;
    std::string str, res;
    std::cin >> N;
    for(int i = 0; i < N; i++)
    {
        std::cin >> re >> str;
        for(int j = 0; j < str.size(); j++)
        {
            for(int k = 0; k < re; k++)
                res.append(str.substr(j, 1));
        }
        std::cout << res << '\n';
        res.clear();
    }
}
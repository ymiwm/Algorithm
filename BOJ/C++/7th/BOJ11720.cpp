#include <bits/stdc++.h>

int main(void)
{
    int N;
    int res = 0;
    std::string str;
    std::cin >> N;
    str.reserve(N);
    std::cin >> str;
    for(int i = 0; i < N; i++)
        res += stoi(str.substr(i, 1));
    std::cout << res;
}
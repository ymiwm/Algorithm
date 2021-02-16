#include <bits/stdc++.h>

int main(void)
{
    int N;
    std::cin >> N;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 0; j < N-i; j++)
            std::cout << ' ';
        for(int j = 0; j < i; j++)
            std::cout << '*';
        std::cout << '\n';
    }
}